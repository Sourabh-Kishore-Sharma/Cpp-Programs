#include "iostream"
using namespace std;

int main(){
  //Stored in stack
  int a = 10;

  //Allocate memory in heap
  //new datatype[size]
  int *p = new int();
  *p = 20;

  cout<<"Value : "<<*p<<endl;

  //Deallocate memory, creates dangling poniter
  delete(p);

  cout<<"After deleting p, is now pointing to memory location "<<p<<" having no value.";
  cout<<endl;
  cout<<"Value : "<<*p<<endl;

  //Dangling pointer can be removed either by re-using p or by removing pointer from the stack
  p = new int[5];

  //p is now pointing to the address of index 0

  delete[]p;
  p=NULL;
}
