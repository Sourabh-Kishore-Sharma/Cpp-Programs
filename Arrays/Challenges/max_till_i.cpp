/*
Given an array a[] of size n. For every i from 0 to n-1,
output max( a[0], a[1], ... , a[i] )
*/

#include "iostream"
#include "climits"
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

  int max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i] > max)
      max = arr[i];
    cout<<max<<" ";
  }
  cout<<endl;
}
