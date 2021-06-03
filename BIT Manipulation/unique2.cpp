/*
Program to find 2 unique numbers in an array where
all numbers except two, are present twice.
*/
#include "iostream"
using namespace std;

bool getBit(int n, int pos){
  return ((n&(1<<pos)) != 0);
}

int unique(int arr[], int n){
  int xor_sum = 0;
  for(int i=0; i<n; i++){
    xor_sum = xor_sum^arr[i];
  }

  int temp_xor = xor_sum;
  //Find rightmost set-bit index
  int set_bit = 0;
  int pos = 0;
  while(set_bit != 1){
    set_bit = xor_sum & 1;
    pos++;
    xor_sum = xor_sum>>1;
  }

  //Calculate new xor for elements in array having
  //set bit at position pos-1. (Will return 1 unique element)
  int unique_1 = 0;
  for(int i=0; i<n; i++){
    if(getBit(arr[i], pos-1)){
        unique_1 = unique_1^arr[i];
    }
  }

  //Calculate 2nd unique element by taking its xor with
  // xor of whole array
  int unique_2 = unique_1^temp_xor;
  cout<<unique_1<<" "<<unique_2<<endl;
  return 0;
}

int main(){
  int n;
  cin>>n;

  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  unique(arr, n);
  return 0;
}
