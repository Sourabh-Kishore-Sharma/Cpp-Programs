/*
Program to find a unique number in an array
where all number except one, are present thrice.
*/
#include "iostream"
using namespace std;

bool getBit(int n, int pos){
  return ( (n&(1<<pos)) != 0);
}

int setBit(int n, int pos){
  return ( n|(1<<pos));
}

int unique(int arr[], int n){
  int result = 0;
  //Cover all bits i.e 64
  for(int i=0; i<64; i++){
    int sum = 0;
    //Traverse array
    for(int j=0; j<n; j++){
      //Check which elem has set-bit at i
      if(getBit(arr[j], i)){
        sum++;
      }
    }
    //Get set-bit
    if(sum%3 != 0){
      result = setBit(result, i);
    }
  }
  return result;
}

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<unique(arr, n)<<endl;
}
