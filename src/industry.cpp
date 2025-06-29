#include "industry.h"
#include "list-array.h"

namespace industry {

    // rappresenta un arco orientato: da un vertice a un altro
    struct halfEdgeVertex {
        std::string name;              // etichetta del vertice di destinazione
        struct vertexNode* vertPrt;     // puntatore al vertice di destinazione
        halfEdgeVertex* next;           // arco successivo nella lista di adiacenza
    };

    // rappresenta un vertice del grafo
    struct vertexNode {
        std::string name;              // etichetta del vertice
        bool isBasic;
        int quantity;
        halfEdgeVertex* adjList;        // lista degli archi uscenti da questo nodo (i suoi componenti)
    };

    // rappresenta l’intera industria
    struct st_Industry {
        vertexNode* items;              // array dinamico di vertici
        int size;                       // numero effettivo di vertici inseriti
        int maxSize;                    // capacità massima dell’array
    };

    typedef st_Industry* Industry;
    const Industry emptyIndustry = nullptr;
    typedef vertexNode* Node; 
    const Node emptyNode = nullptr;
    typedef halfEdgeVertex* Edge;
    const Edge emptyEdge = nullptr;
    const int BLOCKDIM = 100; 




    /**************************************************/
    /*      funzioni ausiliarie                       */
    /**************************************************/




    // funzione per verificare semplicemente se l'industria è vuota
    bool isEmpty(const Industry& indus) {
        return indus == emptyIndustry || indus->size == 0;
    }

    // funzione per trovare un vertice dato la sua etichetta (name)
    Node findVertex(const Industry& indus, std::string name) {
        if (isEmpty(indus)) return emptyNode;
        
        Node cur = indus->items;
        for (int i = 0; i < indus->size; ++i) {
            if (cur[i].name == name) return cur + i; // puntatore al nodo i-esimo
        }
        return emptyNode;
    }

    // funzione ausiliaria per ridimensionare l'array
    void resizeIndustry(Industry& indus) {
        int newMaxSize = indus->maxSize + BLOCKDIM;
        Node newItems = new vertexNode[newMaxSize];

        // copia i dati e dealloca le liste di adiacenza del vecchio array
        for (int i = 0; i < indus->size; ++i) {
            newItems[i] = indus->items[i];
        }

        delete[] indus->items; // dealloca il vecchio array
        indus->items = newItems;
        indus->maxSize = newMaxSize;
    }

    // funzione ricorsiva ausiliaria per removeItem che raccoglie tutti i nomi degli item da eliminare
    void DFS_Remove(const Industry& indus, std::string name, list::List& toDelete) {
        for (int i = 0; i < indus->size; ++i) {
            // per ogni elemento controlliamo la sua lista di adiacenza, quindi i suoi componenti
            Edge adj = indus->items[i].adjList;
            while (adj != emptyEdge) {
                // controlliamo se l'item dipende da name
                if (adj->name == name) {
                    std::string dependentName = indus->items[i].name; // ci salviamo il nome dell'item dipendente

                    // controlliamo se dependentName è già in toDelete
                    bool alreadyAdded = false;
                    for (int j = 0; j < list::size(toDelete); ++j) {
                        if (list::get(j, toDelete) == dependentName) {
                            alreadyAdded = true;
                            break;  // già inserito, non ha senso continuare
                        }
                    }
                    // se non c'è allora posso inserire
                    if (!alreadyAdded) {
                        list::addBack(dependentName, toDelete);
                        DFS_Remove(indus, dependentName, toDelete); // ricorsione sui dipendenti di questo item
                    }
                    // non serve continuare a scorrere la adjList una volta trovato name
                    break;
                }
                adj = adj->next;
            }
        }
    }

    // visita DFS per la funzione listNeededByChain, serve per creare una lista di tutti gli item che dipendono da name
    void DFS_chain(const Industry& indus, std::string name, list::List& lres) {
        for (int i = 0; i < indus->size; ++i) {
            Edge adj = indus->items[i].adjList;
            while (adj != emptyEdge) {
                if (adj->name == name) {
                    std::string dependentName = indus->items[i].name;
                    // controlla se il dipendente è già nella lista lres
                    bool alreadyAdded = false;
                    for (int j = 0; j < list::size(lres); ++j) {
                        if (list::get(j, lres) == dependentName) {
                            alreadyAdded = true;
                            break;
                        }
                    }
                    if (!alreadyAdded) {
                        list::addBack(dependentName, lres);
                        DFS_chain(indus, dependentName, lres); 
                    }
                    break; // passa al prossimo item nell'industria
                }
                adj = adj->next;
            }
        }
    }

    // ordina lessicograficamente 
    void selectionSortList(list::List& l) {
        int n = list::size(l);
        for (int i = 0; i < n - 1; ++i) {
            int minIndex = i;
            for (int j = i + 1; j < n; ++j) {
                if (list::get(j, l) < list::get(minIndex, l)) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                std::string tmp = list::get(i, l);
                list::set(i, list::get(minIndex, l), l);
                list::set(minIndex, tmp, l);
            }
        }
    }

    // funzione ricorsiva ausiliaria per howManyItem, calcola le quantità totali di item di base richiesti per produrre un name
    void contaRichiesti(const Industry& indus, std::string name, std::string* basicNames, int* required, int& count, int moltiplicatore) {

        Node node = findVertex(indus, name);

        if (node->isBasic) {
            bool found = false;
            // se count == 0, questo ciclo viene saltato e si passa subito a inserire il basic item
            for (int i = 0; i < count; ++i) {
                if (basicNames[i] == name) {
                    required[i] += moltiplicatore; // somma le quantità se l'item di base è già stato trovato
                    found = true;
                    break;
                }
            }
            if (!found) {
                // nuovo basic item: lo aggiungo all'array e aggiorno count
                basicNames[count] = name;
                required[count] = moltiplicatore;
                count++;
            }
        } else {   
            Edge adj = node->adjList;
            while (adj != emptyEdge) {
                contaRichiesti(indus, adj->name, basicNames, required, count, moltiplicatore); 
                adj = adj->next;
            }
        }
    }
   
    /**************************************************/
    /*      funzioni principali                       */
    /**************************************************/

    

    // Crea e restituisce un'istanza vuota di Industry.
    Industry createEmptyIndustry() {
        Industry indus = new st_Industry;
        indus->items = new vertexNode[BLOCKDIM];
        indus->size = 0;
        indus->maxSize = BLOCKDIM;
        return indus;
    }

    // Inserisce un nuovo basic item di nome 'name' nell'industria.
    // Se esiste gia' un item con quel nome, la funzione restituisce false e non fa nulla.
    // Altrimenti inserisce l'item e restituisce true.
    // Si assume che, quando viene inserito un basic item, la quantita iniziale sia 0.
    bool insertBasicItem(Industry& indus, std::string name) {

        if (indus == emptyIndustry) return false;
        if (isPresentItem(indus, name)) return false; // L'elemento esiste già

        if (indus->size == indus->maxSize) resizeIndustry(indus);

        // aggiungiamo il nuovo nodo
        indus->items[indus->size].name = name;
        indus->items[indus->size].isBasic = true;
        indus->items[indus->size].quantity = 0;
        indus->items[indus->size].adjList = emptyEdge; 
        indus->size++;
        return true;
    }

    // Inserisce un nuovo item di nome 'name' nell'industria.
    // 'components' e' un array NON VUOTO di lunghezza 's' che contiene i nomi degli item
    // da cui dipende il nuovo item.
    // Se esiste gia' un item con quel nome, la funzione restituisce false e non fa nulla.
    // Se uno qualsiasi degli item indicati in 'components' non esiste nell'industria,
    // la funzione restituisce false e non fa nulla.
    // Altrimenti inserisce l'item e restituisce true.
    bool insertItem(Industry& indus, std::string name, std::string* components, size_t s) {

        if (isEmpty(indus)) return false;

        if (s == 0) return false;

        if (isPresentItem(indus, name)) return false;   // elemento esiste già, esco

        // cerchiamo se dentro a components gli elementi esistono nel mio industry
        for (size_t i = 0; i < s; ++i) {
            if (!isPresentItem(indus, components[i])) return false;      // gli elementi non esistono, esco
        }

        // caso array pieno, ridimensiono
        if (indus->size == indus->maxSize) resizeIndustry(indus);

        int newNode_index = indus->size;    // indice dove sarà inserito il nuovo nodo
        indus->items[newNode_index].name = name;
        indus->items[newNode_index].isBasic = false;
        indus->items[newNode_index].quantity = 0; 
        indus->items[newNode_index].adjList = emptyEdge;

        // costruisco lista adjList 
        for (size_t i = 0; i < s; ++i) {
            Edge edge = new halfEdgeVertex;
            edge->name = components[i];     // nome del componente
            edge->vertPrt = findVertex(indus, components[i]); // puntatore al nodo componente

            // qua sto collegando il nodo destinatario ai suoi componenti
            edge->next = indus->items[newNode_index].adjList;
            indus->items[newNode_index].adjList = edge;
        }

        indus->size++;
        return true;
    }

    // Restituisce true se esiste un item con il nome 'name' nell'industria, false altrimenti.
    bool isPresentItem(const Industry& indus, std::string name) {
        return findVertex(indus, name) != emptyNode;
    }

    // Rimuove l'item di nome 'name' dall'industria.
    // Se esiste almeno un altro item che dipende direttamente o indirettamente da 'name',
    // verra' rimosso anche quello.
    // Se non esiste un item con quel nome, la funzione restituisce false e non fa nulla.
    // Altrimenti, rimuove l'item (e quelli dipendenti) e restituisce true.
    bool removeItem(Industry& indus, std::string name) {

        if (isEmpty(indus)) return false;
        if (!isPresentItem(indus, name)) return false;

        // lista che conterrà gli elementi da rimuovere
        list::List toDelete = list::createEmpty();
        
        // aggiunge l'elemento di partenza (name) alla lista da eliminare
        list::addBack(name, toDelete);
        
        // creiamo una lista con tutti gli elementi che dipendono da name
        DFS_Remove(indus, name, toDelete);

        // creaiamo un nuovo array per contenere gli elementi che NON devono essere eliminati
        Node newItems = new vertexNode[indus->maxSize];
        int newSize = 0;

        for (int i = 0; i < indus->size; ++i) {
            bool shouldRemove = false;
            for (int j = 0; j < list::size(toDelete); ++j) {
                if (indus->items[i].name == list::get(j, toDelete)) {   // controlliamo se il nome di item[i] è presente nella lista dei nodi da eliminare
                    shouldRemove = true;
                    // dealloca la sua adjList
                    Edge cur = indus->items[i].adjList;
                    while (cur != emptyEdge) {
                        Edge temp = cur->next;
                        delete cur;
                        cur = temp;
                    }
                    break; // trovato il name mi fermo, non devo fare altro
                }
            }
            
            if (!shouldRemove) {
                newItems[newSize++] = indus->items[i]; 
            }
        }

        // dealloca il vecchio array 
        delete[] indus->items;

        indus->items = newItems;
        indus->size = newSize;

        // aggiorna i vertPrt nelle adjList in base al nuovo array di nodi
        for (int i = 0; i < indus->size; ++i) {
            Edge cur = indus->items[i].adjList;
            while (cur != emptyEdge) {
                cur->vertPrt = findVertex(indus, cur->name);    // per ogni arco aggiorniamo il suo vertPrt puntando al nodo di destinazione
                cur = cur->next;
            }
        }
        
        list::clear(toDelete); // eliminiamo la lista toDelete in quanto abbiamo finito tutto
        return true;
    }

    // Aumenta o diminuisce la quantita dell'item di base di nome 'name' di un valore 'v'.
    // Se 'v' e' negativo e la quantita corrente e' Q, la nuova quantita sara' max(Q + v, 0).
    // La quantita non puo' mai diventare negativa.
    // Se non esiste un basic item con quel nome, la funzione restituisce false e non fa nulla.
    // Altrimenti restituisce true.
    bool addBasicItem(Industry& indus, std::string name, int quantity) {

        if (isEmpty(indus)) return false;

        Node node = findVertex(indus, name);

        // item non trovato o non è un item di base
        if (node == emptyNode || node->isBasic == false) return false; 

        // se tutto va bene aumento la sua quantità
        node->quantity += quantity;

        if (node->quantity < 0) node->quantity = 0; 

        return true;
    }

    // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
    // da cui l'item di nome 'name' dipende direttamente.
    // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
    // Altrimenti restituisce true.
    bool listNeed(const Industry& indus, std::string name, list::List& lres) {

        if (isEmpty(indus)) {
            lres = list::createEmpty();
            return false;
        }

        // il nodo non esiste
        Node node = findVertex(indus, name);
        if (node == emptyNode) {
            lres = list::createEmpty();
            return false;
        }

        lres = list::createEmpty();
        // scorriamo i componeneti da cui dipende
        Edge current = node->adjList;
        while (current != emptyEdge) {
            list::addBack(current->name, lres);
            current = current->next;
        }

        selectionSortList(lres);
       
        return true;
    }

    // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
    // che dipendono direttamente dall'item di nome 'name'.
    // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
    // Altrimenti restituisce true.
    bool listNeededBy(const Industry& indus, std::string name, list::List& lres) {

        if (isEmpty(indus)) {
            lres = list::createEmpty();
            return false;
        }
        if (!isPresentItem(indus, name)) {
            lres = list::createEmpty();
            return false;
        }

        lres = list::createEmpty();
        // Cerca solo i dipendenti diretti
        for (int i = 0; i < indus->size; ++i) {
            Edge adj = indus->items[i].adjList;
            while (adj != emptyEdge) {
                if (adj->name == name) {
                    list::addBack(indus->items[i].name, lres);
                    break; // passa al prossimo item nell'industria
                }
                adj = adj->next;
            }
        }

        selectionSortList(lres);

        return true;
    }

    // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
    // che dipendono (direttamente o indirettamente) dall'item di nome 'name'.
    // Esempio: se o1 dipende da o2 e o2 dipende da o3,
    // allora listNeededByChain("o3") restituira' o2 e o1.
    // Se invece si usa listNeededBy("o3"), la lista non includera' o1
    // perche' non dipende direttamente da o3.
    // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
   // Altrimenti restituisce true.
    bool listNeededByChain(const Industry& indus, std::string name, list::List& lres) {

        if (isEmpty(indus)) {
            lres = list::createEmpty();
            return false;
        }
        if (!isPresentItem(indus, name)) {
            lres = list::createEmpty();
            return false;
        }

        lres = list::createEmpty();
        DFS_chain(indus, name, lres); // inizia la ricorsione per riempire lres

        selectionSortList(lres);

        return true;
    }

    // Calcola e memorizza in 'res' il numero massimo di item di nome 'name'
    // che si possono costruire con le quantita attualmente disponibili dei basic item.
    // Se l'item non esiste, la funzione restituisce false e imposta 'res' a 0.
    // Altrimenti restituisce true.
    bool howManyItem(const Industry& indus, std::string name, unsigned& res) {

        if (isEmpty(indus) || !isPresentItem(indus, name)) {
            res = 0;
            return false;
        }

        Node node = findVertex(indus, name);
        // se il nodo è basic ritorno direttamente la sua quantità
        if (node->isBasic) {
            res = node->quantity;
            return true;
        }

        std::string basicNames[BLOCKDIM]; // array che contiene tutti i basic item
        int required[BLOCKDIM];          // serve per memorizzare quante unità di ogni basic item servono per costruire un’unità name
        int count = 0;

        // calcola le quantità totali di item di base richiesti per produrre 1 unità di name
        contaRichiesti(indus, name, basicNames, required, count, 1); // iniziamo con 1 unità dell'item richiesto

        int minProducible = -1; 

        // calcola quante unità di name possono essere prodotte
        for (int i = 0; i < count; ++i) {
            Node basicNode = findVertex(indus, basicNames[i]);
            
            // se il basic item non esiste o ha quantità 0, non possiamo produrre nulla
            if (basicNode == emptyNode || basicNode->quantity == 0) {
                res = 0;
                return true;
            }

            // quante unità di name possono essere prodotte in base a questo basic item
            int canProduce = basicNode->quantity / required[i];
            
            // serve per prendere il valore più piccolo
            if (minProducible == -1 || canProduce < minProducible) {
                minProducible = canProduce;
            }
        }

        res = minProducible;
        
        return true;
    }

} // fine namespace industry

// NOTA: ho messo tutte le funzioni e le struct all'interno del namespace industry per evitare conflitti durante la compilazione su macOS