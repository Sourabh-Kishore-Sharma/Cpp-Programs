#include "iostream"
using namespace std;

int main(){

  //Allocate memory for array
  int* arr = new int[5];

  //Traverse array
  for(int i=0; i<5; i++){
    *(arr+i) = rand() % 100;
  }

  //Print array
  for(int i=0; i<5; i++){
    cout<<*(arr+i)<<" ";
  }
  cout<<endl;

  //Deallocate memory
  delete[] arr;
  arr = NULL;
}
