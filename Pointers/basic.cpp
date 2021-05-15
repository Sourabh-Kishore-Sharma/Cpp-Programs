#include "iostream"
using namespace std;

int main(){
  int a = 10;

  //Initializing a int type pointer
  int* a_ptr;

  //Storing address of variable a
  a_ptr = &a;

  //Change value of 'a' using dereferencing
  cout<<"Value of 'a' before dereferencing : "<<a<<endl;
  *a_ptr = 100;
  cout<<"Value of 'a' after dereferencing : "<<a<<endl;

  //Increment to next memory location for type int(4 bytes)
  cout<<"Address value before incrementing : "<<a_ptr<<endl;
  a_ptr++;
  cout<<"Address value after incrementing : "<<a_ptr<<endl;

}
