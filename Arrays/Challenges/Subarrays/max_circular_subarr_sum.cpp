/*
Maximum Circular Subarray Sum Problem
1. Calculate max sum without wrapping by usual kadane's method.
2. Calculate total sum.
3. Multiply whole sub array by -1.
4. Apply kadane's method to updated array which will give sum of
    non-contributing elements
5. Subtract it from total sum.

Max subarray sum = Total sum of array - sum of non-contributing elements
*/
#include "iostream"
#include "climits"
using namespace std;

int kadane(int a[], int n){
  int currSum=0;
  int mx = INT_MIN;
  for(int i=0; i<n; i++){
    currSum += a[i];
    if(currSum<0)
      currSum = 0;

    mx = max(mx,currSum);
  }
  return mx;
}

int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;

  int arr[n];

  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int wrapSum,nonWrapSum;
  nonWrapSum = kadane(arr,n);

  int totalSum =0;
  for(int i=0;i<n;i++){
    totalSum += arr[i];
    arr[i] = -arr[i];
    }

  wrapSum = totalSum + kadane(arr,n);

  cout<<max(wrapSum,nonWrapSum)<<endl;

}
