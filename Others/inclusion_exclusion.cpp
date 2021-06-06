/*
Program to find numbers divisible by a or b till n.
Excluding numbers divisible by both.
*/
#include "iostream"
using namespace std;

int divisible(int n, int a, int b){
  int n1 = n/a;
  int n2 = n/b;

  int n3 = n/(a*b);

  return n1+n2-n3;
}

int main(){

  int n,a,b;
  
  cin>>n>>a>>b;
  cout<<divisible(n, a, b)<<endl;
}
