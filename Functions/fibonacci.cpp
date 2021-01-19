#include "iostream"
using namespace std;

void fibo(int n){
  int t1=0;
  int t2=1;
  int nextTerm;

  for(int i=1;i<=n;i++){
    cout<<t1<<",";
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;
  }
  cout<<endl;
  return;
}

int main(){
  int n;
  cout<<"Enter number of terms: ";
  cin>>n;

  fibo(n);
}
