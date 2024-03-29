/*
Given three rods, transfer n rods from A to C using helper rod B.
*/
#include "iostream"
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){
  if(n==0)
    return;

  towerOfHanoi(n-1, src, helper, dest);
  cout<<"Move from "<<src<<" to "<<dest<<endl;
  towerOfHanoi(n-1, helper, dest, src);
}

int main(){
  int n;
  char src, dest, helper;
  cin>>n>>src>>dest>>helper;

  towerOfHanoi(n, src, dest, helper);

  return 0;
}
