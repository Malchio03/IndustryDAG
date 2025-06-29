#ifndef INDUSTRY_H
#define INDUSTRY_H

#include <cstddef>
#include <string>   
#include "list-array.h"

namespace industry {
  struct st_Industry;
  
  typedef st_Industry* Industry;

  /**********************************************************************/
  /*                         Funzioni da implementare                   */
  /**********************************************************************/

  // Crea e restituisce un'istanza vuota di Industry.
  Industry createEmptyIndustry();

  // Inserisce un nuovo basic item di nome 'name' nell'industria.
  // Se esiste gia' un item con quel nome, la funzione restituisce false e non fa nulla.
  // Altrimenti inserisce l'item e restituisce true.
  // Si assume che, quando viene inserito un basic item, la quantita iniziale sia 0.
  bool insertBasicItem(Industry& indus, std::string name);

  // Inserisce un nuovo item di nome 'name' nell'industria.
  // 'components' e' un array NON VUOTO di lunghezza 's' che contiene i nomi degli item
  // da cui dipende il nuovo item.
  // Se esiste gia' un item con quel nome, la funzione restituisce false e non fa nulla.
  // Se uno qualsiasi degli item indicati in 'components' non esiste nell'industria,
  // la funzione restituisce false e non fa nulla.
  // Altrimenti inserisce l'item e restituisce true.
  bool insertItem(Industry& indus, std::string name, std::string* components, size_t s);

  // Restituisce true se esiste un item con il nome 'name' nell'industria, false altrimenti.
  bool isPresentItem(const Industry& indus, std::string name);

  // Rimuove l'item di nome 'name' dall'industria.
  // Se esiste almeno un altro item che dipende direttamente o indirettamente da 'name',
  // verra' rimosso anche quello.
  // Se non esiste un item con quel nome, la funzione restituisce false e non fa nulla.
  // Altrimenti, rimuove l'item (e quelli dipendenti) e restituisce true.
  bool removeItem(Industry& indus, std::string name);

  // Aumenta o diminuisce la quantita dell'item di base di nome 'name' di un valore 'v'.
  // Se 'v' e' negativo e la quantita corrente e' Q, la nuova quantita sara' max(Q + v, 0).
  // La quantita non puo' mai diventare negativa.
  // Se non esiste un basic item con quel nome, la funzione restituisce false e non fa nulla.
  // Altrimenti restituisce true.
  bool addBasicItem(Industry& indus, std::string name, int v);

  // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
  // da cui l'item di nome 'name' dipende direttamente.
  // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
  // Altrimenti restituisce true.
  bool listNeed(const Industry& indus, std::string name, list::List& lres);

  // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
  // che dipendono direttamente dall'item di nome 'name'.
  // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
  // Altrimenti restituisce true.
  bool listNeededBy(const Industry& indus, std::string name, list::List& lres);

  // Riempie la lista 'lres' (in ordine lessicografico) con i nomi degli item
  // che dipendono (direttamente o indirettamente) dall'item di nome 'name'.
  // Esempio: se o1 dipende da o2 e o2 dipende da o3,
  // allora listNeededByChain("o3") restituira' o2 e o1.
  // Se invece si usa listNeededBy("o3"), la lista non includera' o1
  // perche' non dipende direttamente da o3.
  // Se l'item non esiste, la funzione restituisce false e imposta 'lres' a nullptr.
  // Altrimenti restituisce true.
  bool listNeededByChain(const Industry& indus, std::string name, list::List& lres);

  // Calcola e memorizza in 'res' il numero massimo di item di nome 'name'
  // che si possono costruire con le quantita attualmente disponibili dei basic item.
  // Se l'item non esiste, la funzione restituisce false e imposta 'res' a 0.
  // Altrimenti restituisce true.
  bool howManyItem(const Industry& indus, std::string name, unsigned& res);
}

#endif
