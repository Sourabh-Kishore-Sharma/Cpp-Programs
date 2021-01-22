/*
Insert an element from unsorted array to its
correct position (small elements before and larger after)
in sorted array.
-- Start with 2nd element
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

  for(int i=1;i<=n;i++){
    int current = arr[i];
    int j = i-1;
    while(arr[j] > current && j>=0){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1]=current;
  }

  cout<<"Sorted array is ";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
