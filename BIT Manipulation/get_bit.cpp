/*
Program to get bit of a number at specified position.
*/
#include "iostream"

using namespace std;

int getBit(int n, int pos){
  int x = 1<<pos;

  if( (n & x) != 0 )
    return 1;
  else
    return 0;
}

int main(){
  int n, pos;
  cin>>n>>pos;

  cout<<getBit(n, pos)<<endl;

  return 0;
}
