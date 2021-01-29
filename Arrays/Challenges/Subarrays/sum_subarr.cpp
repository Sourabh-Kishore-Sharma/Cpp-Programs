/*
Given an array a[] of size n. Output sum of each subarray.
*/
#include "iostream"
using namespace std;

int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;

  int arr[n];
  cout<<"Enter elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int sum = 0;

  for(int i=0;i<n;i++){
    sum=0;
    for(int j=i ;j<n;j++){
      sum += arr[j];
      cout<<sum<<" ";
    }
  }
  cout<<endl;
}
