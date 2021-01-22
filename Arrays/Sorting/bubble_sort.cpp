/*
-- Repeatedly swap two adjacent elements if they are in wrong order.
-- For n elements in array we will need n-1 iterations before we get
our sorted array.
-- 1st iteration = n-1
-- 2nd iteration = n-2
.
.
.
ith iteration = n-i
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

  int cnt=1;
  while(cnt<n){
    for(int i=0;i<n-cnt;i++){
      if(arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
      }
    }
    cnt+=1;
  }

  cout<<"Sorted array: ";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
