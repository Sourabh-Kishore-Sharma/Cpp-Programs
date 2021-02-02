/*
Find the subarray in an array which has
maximum sum with time complexity of O(n)
using Kadane's algorithm.
*/
#include "iostream"
using namespace std;

int main(){
  int n;
  cout<<"Enter size: ";
  cin>>n;

  int a[n];
  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int sum=0;
  int mx;
  for(int i=0;i<n;i++){
    sum += a[i];
    if(sum<0)
      sum=0;
    mx = max(sum,mx);
  }
  cout<<"Maximum sum: "<<mx<<endl;
}
