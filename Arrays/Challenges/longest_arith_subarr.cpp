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

  int max = 0;

  for(int i=0;i<n;i++){
    int cnt = 0;
    int d = a[i+1]-a[i];
    for(int j=i;j<n;j++){
      if(a[j]+d == a[j+1]){
        cnt += 1;
        continue;
        }
      }
      if(max < cnt){
        max = cnt;
    }
  }
  cout<<max+1<<endl;
}
