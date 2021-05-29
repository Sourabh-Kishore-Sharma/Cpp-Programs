/*
Program to perform various functions on bit
1) getBit() - Get bit of a number at specified position.
2) setBit() - Set bit 1 at specified position.
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

int setBit(int n, int pos){
  int x = 1<<pos;
  return n | x;
}


int main(){
  int n, pos;
  cin>>n>>pos;

  cout<<getBit(n, pos)<<endl;

  cout<<setBit(n, pos)<<endl;

  return 0;
}
