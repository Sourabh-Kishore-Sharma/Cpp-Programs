#include "iostream"
using namespace std;

int fact(int n){
  int res=1;
  for(int i=1;i<=n;i++){
    res*=i;
  }
  return res;
}


int main(){
  int n;

  cout<<"Enter number: ";
  cin>>n;

  int ans=fact(n);
  cout<<"Factorial of "<<n<<" is "<<ans<<endl;
  return 0;
}
