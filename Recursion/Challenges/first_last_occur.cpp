/*
Program to find first and last occurence of n in an array.
*/
#include "iostream"
using namespace std;

int firstOccur(int arr[], int n, int i,int key){
  if(i==n)
    return -1;

  //first search for key
  //if found, return
  //else, traverse remaining array
  if(arr[i]==key)
    return i;

  return firstOccur(arr, n, i+1, key);
}

int lastOccur(int arr[], int n, int i, int key){
  if(i==n)
    return -1;

  //first traverse whole array
  //then find key from backwards
  int restArray = lastOccur(arr, n, i+1, key);

  if(restArray!=-1)
    return restArray;

  if(arr[i]==key)
    return i;

  return -1;
}


int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int i=0;
  int key;
  cin>>key;

  cout<<firstOccur(arr, n, i,key)<<endl;
  cout<<lastOccur(arr, n, i, key)<<endl;

  return 0;
}
