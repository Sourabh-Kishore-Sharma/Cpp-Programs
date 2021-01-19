#include "iostream"
using namespace std;

int main(){
  int n;
  int i,j;

  cout<<"Enter n: ";
  cin>>n;

  //Upper Pattern
  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(j=1;j<=i*2-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }

  //Lower Pattern
  for(i=n;i>=1;i--){
    for(j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(j=1;j<=i*2-1;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
