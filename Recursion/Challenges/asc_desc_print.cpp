/*
Program to print numbers till n using Recursion.
i) Descending Order
ii) Ascending Order
*/
#include "iostream"
using namespace std;

void dec(int n){
  //base condition, n=0
  if(n==0){
    return;
  }
  //Print before call
  cout<<n<<" ";
  dec(n-1);
}

void asc(int n){

  if(n==0){
    return;
  }

  //Call before print
  asc(n-1);
  cout<<n<<" ";
}

int main(){
  int n;
  cin>>n;

  dec(n);
  cout<<endl;
  asc(n);
  cout<<endl;
}
