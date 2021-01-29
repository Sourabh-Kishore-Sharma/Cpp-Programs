/*
Arithmetic Array - i) Contains atleast two elements.
                   ii) Differences between consecutive integers are equal.
Problem - To find length of the "longest contiguous arithmetic subarray".
*/
#include "iostream"
using namespace std;

int main(){
  int n=0;
  while(n<2){
  cout<<"Enter array size: ";
  cin>>n;
  if(n<2)
    cout<<"Enter size greater than 1"<<endl;
  }

  int a[n];

  cout<<"Enter elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  int ans = 2;
  int pd = a[1]-a[0];
  int j = 2;
  int curr = 2;

  while(j<n){
    if(pd == a[j]-a[j-1]){
      curr +=1;
    }
    else{
      pd = a[j] - a[j-1];
      curr = 2;
    }
    ans = max(ans,curr);
    j++;
  }
  cout<<ans<<endl;

}
