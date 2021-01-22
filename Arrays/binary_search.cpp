#include "iostream"
using namespace std;

int binarySearch(int arr[], int n, int k){
  int s=0,e=n;

  while(s<=e){
    int mid=(s+e)/2;

    if(arr[mid] == k){
      return mid;
    }
    else if(arr[mid] > k){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return -1;

}

int main(){

  int n,k;
  cout<<"Enter size: ";
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Enter key: ";
  cin>>k;

  int ans = binarySearch(arr, n, k);
  if(ans != -1)
    cout<<"Element found at "<<ans<<endl;
  else
    cout<<"Element not found"<<endl;
}
