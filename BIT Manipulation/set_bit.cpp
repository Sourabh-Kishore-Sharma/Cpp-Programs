/*
Program to set bit 1 at specified position.
*/
#include "iostream"

using namespace std;

int setBit(int n, int pos){
  int x = 1<<pos;

  return n | x;

}

int main(){
  int n, pos;
  cin>>n>>pos;

  cout<<setBit(n, pos)<<endl;

  return 0;
}
