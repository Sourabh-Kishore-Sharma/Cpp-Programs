#include "iostream"
using namespace std;

int main(){
  int n,d;
  int rev=0;

  cout<<"Enter a number: ";
  cin>>n;
  int num=n;

  while(n!=0){
    last_digit=n%10;
    rev=rev*10+last_digit;
    n=n/10;
  }
  cout<<"Reverse of "<<num<<" is "<<rev<<".\n";
}
