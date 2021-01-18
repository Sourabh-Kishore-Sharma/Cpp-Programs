#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  int i;
  bool flag=0;

  cout<<"Enter n(above 1): ";
  cin>>n;

  for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
      cout<<"Non-Prime\n";
      flag=1;
      break;
    }
  }
  if(flag==0)
    cout<<"Prime\n";
}
