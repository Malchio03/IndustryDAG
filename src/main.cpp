#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "industry.h"
#include "list-array.h"

using namespace industry;
using namespace list;
using namespace std;



int main(){
  cout<<boolalpha;
  
  unsigned i=1;
  unsigned ret=0;
  bool bres=false;
  bool breq=false;
 
  cout<<"**** No Test: ind=createEmptyIndustry();"<<endl;
  Industry ind=createEmptyIndustry();
  cout<<endl;
  
  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A2\")"<<endl;
    bres=insertBasicItem(ind,"A2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A3\")"<<endl;
    bres=insertBasicItem(ind,"A3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A4\")"<<endl;
    bres=insertBasicItem(ind,"A4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A5\")"<<endl;
    bres=insertBasicItem(ind,"A5");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A1\",\"A2\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="A1";
    comp[1]="A2";
    bres=insertItem(ind,"B1",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A3";
    bres=insertItem(ind,"B1",comp,1);
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{},0)"<<endl;
    string* comp=nullptr;
    bres=insertItem(ind,"B2",comp,0);
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A10\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A10";
    bres=insertItem(ind,"B2",comp,1);
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A1\",\"A2\",\"A6\"},3)"<<endl;
    string* comp=new string[3];
    comp[0]="A1";
    comp[1]="A2";
    comp[2]="A6";
    bres=insertItem(ind,"B2",comp,3);
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A2\",\"A3\",\"A5\"},3)"<<endl;
    string* comp=new string[3];
    comp[0]="A2";
    comp[1]="A3";
    comp[2]="A5";
    bres=insertItem(ind,"B2",comp,3);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B3\",{\"A1\",\"A2\",\"A3\",\"A4\",\"A5\"},5)"<<endl;
    string* comp=new string[5];
    comp[0]="A1";
    comp[1]="A2";
    comp[2]="A3";
    comp[3]="A4";
    comp[4]="A5";
    bres=insertItem(ind,"B3",comp,5);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B3\",{\"A1\",\"A2\",\"A4\",\"A5\"},4)"<<endl;
    string* comp=new string[4];
    comp[0]="A1";
    comp[1]="A2";
    comp[2]="A4";
    comp[3]="A5";
    bres=insertItem(ind,"B3",comp,4);
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"B1\",\"A1\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="B1";
    comp[1]="A1";
    bres=insertItem(ind,"C1",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C2\",{\"B2\",\"B1\",\"B3\"},3)"<<endl;
    string* comp=new string[3];
    comp[0]="B2";
    comp[1]="B1";
    comp[2]="B3";
    bres=insertItem(ind,"C2",comp,3);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C3\",{\"B2\",\"B3\",\"A5\",\"A4\"},4)"<<endl;
    string* comp=new string[4];
    comp[0]="B2";
    comp[1]="B3";
    comp[2]="A5";
    comp[3]="A4";
    bres=insertItem(ind,"C3",comp,4);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C4\",{\"B2\",\"B3\",\"B1\",\"A5\",\"A4\",\"A1\",\"A3\",\"A2\"},8)"<<endl;
    string* comp=new string[8];
    comp[0]="B2";
    comp[1]="B3";
    comp[2]="B1";
    comp[3]="A5";
    comp[4]="A4";
    comp[5]="A1";
    comp[6]="A3";
    comp[7]="A2";
    bres=insertItem(ind,"C4",comp,8);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A1\")"<<endl;
    bres=isPresentItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"D1\")"<<endl;
    bres=isPresentItem(ind,"D1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C1\")"<<endl;
    bres=isPresentItem(ind,"C1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C4\")"<<endl;
    bres=isPresentItem(ind,"C4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B3\")"<<endl;
    bres=isPresentItem(ind,"B3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B1\")"<<endl;
    bres=isPresentItem(ind,"B1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B2\")"<<endl;
    bres=isPresentItem(ind,"B2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

   {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A6\")"<<endl;
    bres=isPresentItem(ind,"A6");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A6\")"<<endl;
    bres=insertBasicItem(ind,"A6");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A6\")"<<endl;
    bres=isPresentItem(ind,"A6");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A6\")"<<endl;
    bres=removeItem(ind,"A6");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A6\")"<<endl;
    bres=isPresentItem(ind,"A6");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A6\")"<<endl;
    bres=removeItem(ind,"A6");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"C1\")"<<endl;
    bres=removeItem(ind,"C1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C1\")"<<endl;
    bres=isPresentItem(ind,"C1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A1\")"<<endl;
    bres=isPresentItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A1\")"<<endl;
    bres=removeItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A1\")"<<endl;
    bres=isPresentItem(ind,"A1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B1\")"<<endl;
    bres=isPresentItem(ind,"B1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B2\")"<<endl;
    bres=isPresentItem(ind,"B2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B3\")"<<endl;
    bres=isPresentItem(ind,"B3");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C2\")"<<endl;
    bres=isPresentItem(ind,"C2");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C3\")"<<endl;
    bres=isPresentItem(ind,"C3");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"C4\")"<<endl;
    bres=isPresentItem(ind,"C4");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A2\")"<<endl;
    bres=removeItem(ind,"A2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;
 
  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A2\")"<<endl;
    bres=isPresentItem(ind,"A2");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"B2\")"<<endl;
    bres=isPresentItem(ind,"B2");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A3\")"<<endl;
    bres=isPresentItem(ind,"A3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A3\")"<<endl;
    bres=removeItem(ind,"A3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A3\")"<<endl;
    bres=isPresentItem(ind,"A3");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A4\")"<<endl;
    bres=isPresentItem(ind,"A4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A4\")"<<endl;
    bres=removeItem(ind,"A4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A4\")"<<endl;
    bres=isPresentItem(ind,"A4");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A5\")"<<endl;
    bres=isPresentItem(ind,"A5");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A5\")"<<endl;
    bres=removeItem(ind,"A5");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"A5\")"<<endl;
    bres=isPresentItem(ind,"A5");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  cout<<"----> ind is empty at this point!\n"<<endl;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A2\")"<<endl;
    bres=insertBasicItem(ind,"A2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A3\")"<<endl;
    bres=insertBasicItem(ind,"A3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"A3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"A3",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"B1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"B1",lres);
    string sres=toString(lres);
    string sreq="A1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A3\",\"A1\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="A3";
    comp[1]="A1";
    bres=insertItem(ind,"B2",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"B2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"B2",lres);
    string sres=toString(lres);
    string sreq="A1; A3;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A4\")"<<endl;
    bres=insertBasicItem(ind,"A4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A5\")"<<endl;
    bres=insertBasicItem(ind,"A5");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B3\",{\"A3\",\"A5\",\"A1\"},3)"<<endl;
    string* comp=new string[3];
    comp[0]="A3";
    comp[1]="A5";
    comp[2]="A1";
    bres=insertItem(ind,"B3",comp,3);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"B3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"B3",lres);
    string sres=toString(lres);
    string sreq="A1; A3; A5;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"B2\",\"B1\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="B2";
    comp[1]="B1";
    bres=insertItem(ind,"C1",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"C1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"C1",lres);
    string sres=toString(lres);
    string sreq="B1; B2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

   {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D1\",{\"A5\",\"C1\",\"B3\"},2)"<<endl;
    string* comp=new string[3];
    comp[0]="A5";
    comp[1]="C1";
    comp[2]="B3";
    bres=insertItem(ind,"D1",comp,3);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"D1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"D1",lres);
    string sres=toString(lres);
    string sreq="A5; B3; C1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D2\",{\"A5\",\"C1\",\"B3\",\"A1\",\"A4\",\"B2\",\"A3\",\"B1\",\"A2\"},9)"<<endl;
    string* comp=new string[9];
    comp[0]="A5";
    comp[1]="C1";
    comp[2]="B3";
    comp[3]="A1";
    comp[4]="A4";
    comp[5]="B2";
    comp[6]="A3";
    comp[7]="B1";
    comp[8]="A2";
    bres=insertItem(ind,"D2",comp,9);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"D2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"D2",lres);
    string sres=toString(lres);
    string sreq="A1; A2; A3; A4; A5; B1; B2; B3; C1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeed(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeed(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"D1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"D1",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"C1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"C1",lres);
    string sres=toString(lres);
    string sreq="D1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"D3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"D3",lres);
    string sres=toString(lres);
    string sreq="";
    breq=false;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E1\",{\"D2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D2";
    bres=insertItem(ind,"E1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"D2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"D2",lres);
    string sres=toString(lres);
    string sreq="E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"B1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"B1",lres);
    string sres=toString(lres);
    string sreq="C1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"B2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"B2",lres);
    string sres=toString(lres);
    string sreq="C1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"B3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"B3",lres);
    string sres=toString(lres);
    string sreq="D1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; B3; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A2",lres);
    string sres=toString(lres);
    string sreq="D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A3",lres);
    string sres=toString(lres);
    string sreq="B2; B3; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A4\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A4",lres);
    string sres=toString(lres);
    string sreq="D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A5\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A5",lres);
    string sres=toString(lres);
    string sreq="B3; D1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"D2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"D2",lres);
    string sres=toString(lres);
    string sreq="E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"D1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"D1",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"C1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"C1",lres);
    string sres=toString(lres);
    string sreq="D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"B3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"B3",lres);
    string sres=toString(lres);
    string sreq="D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"B2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"B2",lres);
    string sres=toString(lres);
    string sreq="C1; D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"B1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"B1",lres);
    string sres=toString(lres);
    string sreq="C1; D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A5\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A5",lres);
    string sres=toString(lres);
    string sreq="B3; D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A4\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A4",lres);
    string sres=toString(lres);
    string sreq="D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A3\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A3",lres);
    string sres=toString(lres);
    string sreq="B2; B3; C1; D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A2",lres);
    string sres=toString(lres);
    string sreq="D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

   {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; B3; C1; D1; D2; E1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"E1\")"<<endl;
    bres=removeItem(ind,"E1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; B3; C1; D1; D2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A4\")"<<endl;
    bres=removeItem(ind,"A4");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; B3; C1; D1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;
  
  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A3\")"<<endl;
    bres=removeItem(ind,"A3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A5\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A5",lres);
    string sres=toString(lres);
    string sreq="";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A5\")"<<endl;
    bres=removeItem(ind,"A5");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A2\")"<<endl;
    bres=removeItem(ind,"A2");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A1\")"<<endl;
    bres=removeItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  cout<<"----> ind is empty at this point!\n"<<endl;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D1\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"D1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"D1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D1";
    bres=insertItem(ind,"C1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"B1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E1\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"E1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"I1\",{\"E1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="E1";
    bres=insertItem(ind,"I1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"G1\",{\"I1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="I1";
    bres=insertItem(ind,"G1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"H1\",{\"G1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="G1";
    bres=insertItem(ind,"H1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"F1\",{\"H1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="H1";
    bres=insertItem(ind,"F1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="D1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; C1; D1; E1; F1; G1; H1; I1;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A1\")"<<endl;
    bres=removeItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": isPresentItem(ind,\"F1\")"<<endl;
    bres=isPresentItem(ind,"F1");
    breq=false;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  cout<<"----> ind is empty at this point!\n"<<endl;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"C1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C2\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"C2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C3\",{\"B2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B2";
    bres=insertItem(ind,"C3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C4\",{\"B2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B2";
    bres=insertItem(ind,"C4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D1\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"D1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D2\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"D2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D3\",{\"C2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C2";
    bres=insertItem(ind,"D3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D4\",{\"C2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C2";
    bres=insertItem(ind,"D4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D5\",{\"C3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C3";
    bres=insertItem(ind,"D5",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D6\",{\"C3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C3";
    bres=insertItem(ind,"D6",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D7\",{\"C4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C4";
    bres=insertItem(ind,"D7",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D8\",{\"C4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C4";
    bres=insertItem(ind,"D8",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E1\",{\"D1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D1";
    bres=insertItem(ind,"E1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E2\",{\"D1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D1";
    bres=insertItem(ind,"E2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E3\",{\"D2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D2";
    bres=insertItem(ind,"E3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E4\",{\"D2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D2";
    bres=insertItem(ind,"E4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E5\",{\"D3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D3";
    bres=insertItem(ind,"E5",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E6\",{\"D3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D3";
    bres=insertItem(ind,"E6",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E7\",{\"D4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D4";
    bres=insertItem(ind,"E7",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E8\",{\"D4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D4";
    bres=insertItem(ind,"E8",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E9\",{\"D5\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D5";
    bres=insertItem(ind,"E9",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E10\",{\"D5\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D5";
    bres=insertItem(ind,"E10",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E11\",{\"D6\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D6";
    bres=insertItem(ind,"E11",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E12\",{\"D6\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D6";
    bres=insertItem(ind,"E12",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E13\",{\"D7\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D7";
    bres=insertItem(ind,"E13",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E14\",{\"D7\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D7";
    bres=insertItem(ind,"E14",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E15\",{\"D8\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D8";
    bres=insertItem(ind,"E15",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E16\",{\"D8\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D8";
    bres=insertItem(ind,"E16",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededBy(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededBy(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"B2\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"B2",lres);
    string sres=toString(lres);
    string sreq="C3; C4; D5; D6; D7; D8; E10; E11; E12; E13; E14; E15; E16; E9;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

   {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; C1; C2; C3; C4; D1; D2; D3; D4; D5; D6; D7; D8; E1; E10; E11; E12; E13; E14; E15; E16; E2; E3; E4; E5; E6; E7; E8; E9;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"C3\")"<<endl;
    bres=removeItem(ind,"C3");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B1; B2; C1; C2; C4; D1; D2; D3; D4; D7; D8; E1; E13; E14; E15; E16; E2; E3; E4; E5; E6; E7; E8;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"B1\")"<<endl;
    bres=removeItem(ind,"B1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": listNeededByChain(ind,\"A1\",lres)"<<endl;
    List lres=createEmpty();
    bres=listNeededByChain(ind,"A1",lres);
    string sres=toString(lres);
    string sreq="B2; C4; D7; D8; E13; E14; E15; E16;";
    breq=true;
    if(bres==breq && sres==sreq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  lres: {"<<sres<<"}"<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected List: "<<sreq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained List: "<<sres<<endl;
    }
    clear(lres);
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A1\")"<<endl;
    bres=removeItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  cout<<"----> ind is empty at this point!\n"<<endl;

  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",1)"<<endl;
    bres=addBasicItem(ind,"A1",1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"A1\",ures)"<<endl;
    unsigned ures=0;;
    bres=howManyItem(ind,"A1",ures);
    unsigned qres=1;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",3)"<<endl;
    bres=addBasicItem(ind,"A1",3);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"A1\",ures)"<<endl;
    unsigned ures=0;;
    bres=howManyItem(ind,"A1",ures);
    unsigned qres=4;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

   {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",-5)"<<endl;
    bres=addBasicItem(ind,"A1",-5);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"A1\",ures)"<<endl;
    unsigned ures=0;;
    bres=howManyItem(ind,"A1",ures);
    unsigned qres=0;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;


  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"C1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D1\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"D1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",10)"<<endl;
    bres=addBasicItem(ind,"A1",10);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;


  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"D1\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"D1",ures);
    unsigned qres=10;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C2\",{\"B1\",\"B2\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="B1";
    comp[1]="B2";
    bres=insertItem(ind,"C2",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"C2\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"C2",ures);
    unsigned qres=5;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D2\",{\"C2\",\"A1\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="C2";
    comp[1]="A1";
    bres=insertItem(ind,"D2",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"D2\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"D2",ures);
    unsigned qres=3;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E1\",{\"D1\",\"D2\"},2)"<<endl;
    string* comp=new string[2];
    comp[0]="D1";
    comp[1]="D2";
    bres=insertItem(ind,"E1",comp,2);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"E1\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"E1",ures);
    unsigned qres=2;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": removeItem(ind,\"A1\")"<<endl;
    bres=removeItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  cout<<"----> ind is empty at this point!\n"<<endl;

  
  {
    cout<<"*** Test "<<i<<": insertBasicItem(ind,\"A1\")"<<endl;
    bres=insertBasicItem(ind,"A1");
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B1\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"B2\",{\"A1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="A1";
    bres=insertItem(ind,"B2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C1\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"C1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C2\",{\"B1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B1";
    bres=insertItem(ind,"C2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C3\",{\"B2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B2";
    bres=insertItem(ind,"C3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"C4\",{\"B2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="B2";
    bres=insertItem(ind,"C4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D1\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"D1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D2\",{\"C1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C1";
    bres=insertItem(ind,"D2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D3\",{\"C2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C2";
    bres=insertItem(ind,"D3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D4\",{\"C2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C2";
    bres=insertItem(ind,"D4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D5\",{\"C3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C3";
    bres=insertItem(ind,"D5",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D6\",{\"C3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C3";
    bres=insertItem(ind,"D6",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D7\",{\"C4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C4";
    bres=insertItem(ind,"D7",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"D8\",{\"C4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="C4";
    bres=insertItem(ind,"D8",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E1\",{\"D1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D1";
    bres=insertItem(ind,"E1",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E2\",{\"D1\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D1";
    bres=insertItem(ind,"E2",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E3\",{\"D2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D2";
    bres=insertItem(ind,"E3",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E4\",{\"D2\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D2";
    bres=insertItem(ind,"E4",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E5\",{\"D3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D3";
    bres=insertItem(ind,"E5",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E6\",{\"D3\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D3";
    bres=insertItem(ind,"E6",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E7\",{\"D4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D4";
    bres=insertItem(ind,"E7",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E8\",{\"D4\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D4";
    bres=insertItem(ind,"E8",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E9\",{\"D5\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D5";
    bres=insertItem(ind,"E9",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E10\",{\"D5\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D5";
    bres=insertItem(ind,"E10",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E11\",{\"D6\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D6";
    bres=insertItem(ind,"E11",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E12\",{\"D6\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D6";
    bres=insertItem(ind,"E12",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E13\",{\"D7\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D7";
    bres=insertItem(ind,"E13",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E14\",{\"D7\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D7";
    bres=insertItem(ind,"E14",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E15\",{\"D8\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D8";
    bres=insertItem(ind,"E15",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"E16\",{\"D8\"},1)"<<endl;
    string* comp=new string[1];
    comp[0]="D8";
    bres=insertItem(ind,"E16",comp,1);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": insertItem(ind,\"Z1\",{\"E1\",\"E2\",\"E3\",\"E4\",\"E5\",\"E6\",\"E7\",\"E8\",\"E9\",\"E10\",\"E11\",\"E12\",\"E13\",\"E4\",\"E15\",\"E16\"},16)"<<endl;
    string* comp=new string[16];
    comp[0]="E1";
    comp[1]="E2";
    comp[2]="E3";
    comp[3]="E4";
    comp[4]="E5";
    comp[5]="E6";
    comp[6]="E7";
    comp[7]="E8";
    comp[8]="E9";
    comp[9]="E10";
    comp[10]="E11";
    comp[11]="E12";
    comp[12]="E13";
    comp[13]="E14";
    comp[14]="E15";
    comp[15]="E16";  
    bres=insertItem(ind,"Z1",comp,16);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    delete[] comp;
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",16)"<<endl;
    bres=addBasicItem(ind,"A1",16);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"Z1\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"Z1",ures);
    unsigned qres=1;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",4)"<<endl;
    bres=addBasicItem(ind,"A1",4);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"Z1\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"Z1",ures);
    unsigned qres=1;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<": addBasicItem(ind,\"A1\",32)"<<endl;
    bres=addBasicItem(ind,"A1",32);
    breq=true;
    if(bres==breq) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
    }
    cout<<endl;
  }
  ++i;

  {
    cout<<"*** Test "<<i<<":  howManyItem(ind,\"Z1\",ures)"<<endl;
    unsigned ures=0;
    bres=howManyItem(ind,"Z1",ures);
    unsigned qres=3;
    breq=true;
    if(bres==breq && ures==qres) {
      ++ret;
      cout<<"  Result: PASSED \n  Return value:"<<bres<<"\n  ures: "<<ures<<endl;
    }else{
      cout<<"  Result: FAILED"<<endl;
      cout<<"  Expected Returned Value: "<<breq<<endl;
      cout<<"  Expected Number: "<<qres<<endl;
      cout<<"  Obtained Returned Value: "<<bres<<endl;
      cout<<"  Obtained Number: "<<ures<<endl;
    }
    cout<<endl;
  }
  ++i;

  
  cout<<"\n--------------------------------------------------"<<endl;
  cout<<"------------> NUMBER OF TESTS PASSED: "<<ret<<"/218"<<endl;
  cout<<"--------------------------------------------------"<<endl;
  return ret;
}