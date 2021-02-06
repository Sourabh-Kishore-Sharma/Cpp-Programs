/*
Check if there exists two elements in an array
such that their sum is equal to given k.
Time Complexity = O(n)
*/
#include "iostream"
using namespace std;

bool pairSum(int arr[], int n, int k){
  int low=0;
  int high=n-1;
  int sum;

  while(low<high){
    sum=arr[low]+arr[high];
    if(sum == k){
      cout<<low<<" "<<high<<endl;
      return true;
    }
    else if(sum < k){
      low += 1;
    }
    else
      high -= 1;
  }

  if (sum == k){
    cout<<low<<" "<<high;
    return true;
  }
  else
    return false;
}

int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;

  int a[n];
    cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int k;
  cout<<"Enter sum: ";
  cin>>k;

  int flag;
  flag = pairSum(a,n,k);

  if(flag == false)
    cout<<"Not Found."<<endl;

}
