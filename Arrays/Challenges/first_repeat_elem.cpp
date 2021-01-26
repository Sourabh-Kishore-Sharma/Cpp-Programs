 /*
To find the first repeating element in the array.
i) Occurs more than once.
ii) Index of first occurence is the smallest.
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
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  const int N = 1e6+2;
  int ind[N];

  for(int i=0; i<N; i++){
    ind[i] = -1;
  }

  int min_i = INT_MAX;

  for(int i=0 ;i<n; i++){
    if( ind[a[i]] != -1){
      min_i = min(min_i,ind[a[i]]);
    }
    else{
      ind[a[i]] = i;
    }
  }
  if(min_i == INT_MAX)
    cout<<"-1"<<endl;
  else
    cout<<min_i+1<<endl;

}
