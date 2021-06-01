/*
Program to find a unique number in an array where all numbers
except one, are present twice.

i) X ^ X == 0
ii) X ^ 0 == X

XOR Cummulative property :
= a^a^b^b^c^d^d
= 0^0^c^0
=c
*/
#include "iostream"
using namespace std;

int unique(int arr[], int n){
  int xor_sum = 0;
  for(int i=0; i<n; i++){
    //XOR each element in array
    xor_sum = xor_sum^arr[i];
  }
  //xor_sum will store the unique number
  return xor_sum;
}

int main(){
  int n;
  cin>>n;

  //Input array
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<unique(arr, n)<<endl;
}
