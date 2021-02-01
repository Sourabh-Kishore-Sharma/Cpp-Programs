/*
Find the subarray in an array which has
maximum sum.
*/
#include "iostream"
#include "climits"
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

  int cum_sum[n];

  for(int i=0;i<=n;i++){
    if(i==0)
      cum_sum[0]=a[0];
    cum_sum[i] = cum_sum[i-1]+a[i];
  }

  int mx=INT_MIN;
  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0; j<i;j++){
      sum = cum_sum[i]-cum_sum[j];
      mx=max(mx,sum);
    }
  }
  cout<<"Maximum sub of the subarray: "<<mx<<endl;
}
