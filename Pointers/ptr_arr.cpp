/*
Program of pointers and arrays.
*/

#include "iostream"
using namespace std;

int main(){
  int arr[] = {10, 20, 30, 40};

  int* ptr = arr; //Since, arr points to the first index

  //Printing array using pointers
  for(int i=0; i<4; i++){
    cout<<*ptr<<" ";
    ptr++;
  }
  cout<<endl;

  //Printing array using arr
  for(int i=0; i<4; i++){
    cout<<*(arr+i)<<" ";
  }
  cout<<endl;

}
