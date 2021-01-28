/*
Given an unsorted array A of size N of non-negative integers,
find a continuous subarray which adds to a given number S.
1 <= N <= 10^5
0 <= Ai <= 10^10
*/
#include "iostream"
using namespace std;

int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;

  int a[n];
  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int s;
  cout<<"Enter sum: ";
  cin>>s;

  int sum=0;
  int start=0;
  int end=0;


  while(end<n && sum+a[end] < s){
    sum += a[end];
    end++;
  }
  sum += a[end];

  if(sum == s){
    cout<<start+1<<" "<<end+1<<endl;
    return 0;
  }

  while(start<=end && sum-a[start]>=s){
      sum -= a[start];
      start++;
     }

  if(sum == s){
      cout<<start+1<<" "<<end+1<<endl;
      return 0;
     }
    else{
      cout<<"Sum not found"<<endl;
     }
}
