/*
Find the minimum element in unsorted array and swap it with element
at the begining.
*/

#include "iostream"
using namespace std;

int main(){
  int n;

  cout<<"Enter array size: ";
  cin>>n;

  int arr[n];
  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int temp;
  for(int i=0;i<n-1;i++){
    for(int j=i+1; j<n;j++){
      if(arr[j] < arr[i]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  cout<<"Sorted array is ";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
