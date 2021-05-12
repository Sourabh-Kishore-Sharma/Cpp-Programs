#include "iostream"
using namespace std;

//Pascal triangle represents the binomial coefficients
int fact(int n){
  int res=1;
  for(int i=2;i<=n;i++){
    res*=i;
  }
  return res;
}


int main(){
  int row;

  cout<<"Enter row number: ";
  cin>>row;

  for(int i=0;i<=row;i++){
    for(int j=0; j<=i;j++){
      cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
    }
    cout<<endl;
  }
  return 0;
}
