/*
Each value in the array represents number of people visited
on each consecutive day.
Record Breaking Day - i) Strictly greater than all the previous values.
                      ii) Strictly greater than the following value.
*/

#include "iostream"
using namespace std;

int main(){

  int n;
  cout<<"Enter size: ";
  cin>>n;

  int a[n+1];
  a[n] = -1;

  cout<<"Enter values: ";
  for(int i=0; i<n ; i++){
    cin>>a[i];
  }

  if(n == 1){
    cout<<"1"<<endl;
    return 0;
  }
  int ans = 0;
  int mx = -1;

  for(int i=0; i<n ;i++){
    if( a[i] > mx && a[i] > a[i+1]){
      ans += 1;
    }
    mx = max(a[i],mx);

  }
  cout<<ans<<endl;
}
