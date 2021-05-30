/*
Program to count one's in binary representation of a number.
*/
#include "iostream"

using namespace std;

int countOnes(int n){
  int cnt=0;
  while(n!=0){
    n = n & (n-1);
    cnt++;
  }
  return cnt;
}

int main(){
  int n;
  cin>>n;
  cout<<"One's : "<<countOnes(n)<<endl;
}
