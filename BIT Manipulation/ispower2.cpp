/*
Program to check if given number is a power of 2 using BIT.
*/
#include "iostream"

using namespace std;

bool isPower2(int n){
  return n && !(n&(n-1));
}

int main(){
  int n;
  cin>>n;
  cout<<isPower2(n)<<endl;
}
