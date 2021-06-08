/*
Program to check if array is sorted using recursion.
Check if arr[0]>arr[1], if true, check for the rest of the array.
*/
#include "iostream"
using namespace std;

bool isSorted(int arr[], int n){
  //base condition, when array size=1
  if(n==1){
    return true;
  }

  //keep incrementing array start pos, decrement size by 1
  bool restArray = isSorted(arr+1, n-1);
  if(arr[0]<arr[1] && restArray){
    return true;
  }

  return false;
}

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<isSorted(arr, n)<<endl;
}
