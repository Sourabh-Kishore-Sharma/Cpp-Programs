/*
Program to find GCD of 2 given numbers.
Note - Subtracting two numbers doesn't change their GCD.
*/
#include "iostream"
using namespace std;

int gcd(int a, int b){
  int r;

  while(r!=0){
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}

int main(){
  int a,b;
  cin>>a>>b;

  cout<<gcd(a,b)<<endl;
}
