#include "iostream"
#include "math.h"
using namespace std;

int main(){
  int original_n,last_digit;
  int sum=0;

  cout<<"Enter a number: ";
  cin>>original_n;

  int n=original_n;

  while(n!=0){
    last_digit=n%10;
    sum+=pow(last_digit,3);
    n=n/10;
  }
  if(original_n==sum)
    cout<<original_n<<" is a armstrong number.\n";
  else
    cout<<original_n<<" is not a armstrong number.\n";
}
