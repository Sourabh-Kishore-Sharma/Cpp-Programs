#include "iostream"
using namespace std;

int main(){
  int n;
  int i,j;

  cout<<"Enter a number: ";
  cin>>n;

  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      cout<<" ";
    }
    for(j=1;j<=n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}
