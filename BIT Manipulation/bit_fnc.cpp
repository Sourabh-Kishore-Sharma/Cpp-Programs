/*
Program to perform various functions on bit
1) getBit() - Get bit of a number at specified position.
2) setBit() - Set bit 1 at specified position.
*/
#include "iostream"

using namespace std;

int getBit(int n, int pos){
  int x = 1<<pos;
  return ((n&x) != 0 );

}

int setBit(int n, int pos){
  int x = 1<<pos;
  return (n|x);
}

int clearBit(int n, int pos){
  int x = 1<<pos;
  int mask = ~x;
  return (n&mask);
}


int main(){
  int n, pos;

  cout<<"1. Get Bit\n"
        "2. Set Bit to 1\n"
        "3. Clear Bit (Set Bit to 0)\n";

  int c;
  cout<<"Enter Option : ";
  cin>>c;

  switch(c){
    case 1:
      cin>>n>>pos;
      cout<<getBit(n, pos)<<endl;
      break;

    case 2:
      cin>>n>>pos;
      cout<<setBit(n, pos)<<endl;
      break;

    case 3:
      cin>>n>>pos;
      cout<<clearBit(n, pos)<<endl;
      break;
  }

  return 0;
}
