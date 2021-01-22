#include "iostream"
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

  int max=0,min=0;

  for(int i=0;i<size;i++){
    if(arr[i]>max)
      max=arr[i];
    if(arr[i]<min)
      min=arr[i];
  }
  cout<<"Min: "<<min<<endl;
  cout<<"Max: "<<max<<endl;
}
