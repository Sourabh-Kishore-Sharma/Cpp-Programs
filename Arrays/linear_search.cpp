#include "iostream"
using namespace std;

int linearSearch(int arr[], int n,int k){

  for(int i=0;i<n;i++){
    if(arr[i]==k)
      return i;
  }
  return -1;
}

int main(){
  int n,k;

  cout<<"Enter array n: ";
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Enter key: ";
  cin>>k;

  int i=linearSearch(arr,n,k);

  if(i != -1)
    cout<<"Element found at "<<i+1<<endl;
  else
    cout<<"Element not found."<<endl;
}
