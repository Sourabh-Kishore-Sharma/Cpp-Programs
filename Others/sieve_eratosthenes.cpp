/*
Program to get all the prime numbers in a given range.

Filter out all the multiples of prime number,
leaving us with only prime numbers.
*/
#include "iostream"
using namespace std;

void primeSieve(int n){
  int prime[100] = {0};

  for(int i=2; i<=n; i++){
    if(prime[i] == 0){
      for(int j=i*i; j<=n; j+=i){
        prime[j] = 1;
      }
    }
  }

  for(int i=2; i<=n; i++){
    if(prime[i] == 0)
      cout<<i<<" ";
    }

  cout<<endl;
}

int main(){
  int n;
  cin>>n;

  primeSieve(n);

}
