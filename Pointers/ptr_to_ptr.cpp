/*
Using a pointer to point a pointer.
*/

#include "iostream"
using namespace std;

int main(){
  int a = 10;

  int* p = &a;

  cout<<*p<<endl; //10

  int** q = &p;

  cout<<*q<<endl; //Value of p(a's address)
  cout<<**q<<endl; //Value of a (10)
}
