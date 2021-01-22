#include "iostream"
#include "climits"
using namespace std;

int main(){
  int size;
  cout<<"Enter array size: ";
  cin>>size;

  int arr[size];

  cout<<"Enter values: "<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  int maxNo=INT_MIN;
  int minNo=INT_MAX;

  for(int i=0;i<size;i++){
    maxNo=max(maxNo,arr[i]);
    minNo=min(minNo,arr[i]);
  }
  cout<<"Min: "<<minNo<<endl;
  cout<<"Max: "<<maxNo<<endl;
}
