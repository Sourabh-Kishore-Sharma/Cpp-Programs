/*
Program to calculate sum till n using recursion.
*/
#include "iostream"
using namespace std;

int sumN(int n){
  if(n==0){
    return 0;
  }

  int prevSum = sumN(n-1);
  return n+prevSum;
}

int main(){
  int n;
  cin>>n;

  cout<<sumN(n)<<endl;
}
