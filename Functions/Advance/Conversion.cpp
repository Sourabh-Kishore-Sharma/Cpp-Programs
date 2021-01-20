#include "iostream"
#include "cstring"
using namespace std;


int binaryToDecimal(int n){
  int ans=0;
  int x=1;
  while(n!=0){
    int digit=n%10;
    ans+=digit*x;
    x*=2;
    n=n/10;
  }
  return ans;
}

int OctalToDecimal(int n){
  int ans=0;
  int x=1;
  while(n!=0){
    int digit=n%10;
    ans+=digit*x;
    x*=8;
    n=n/10;
  }
  return ans;
}

int HexadecimalToDecimal(string hex_val){
  int ans=0;
  int x=1;
  int len=hex_val.size();

  for(int i=len-1;i>=0;i--){
    if (hex_val[i]>='0' && hex_val[i]<='9'){
      ans += x*(hex_val[i]-48);
    }
    else if (hex_val[i] >= 'A' && hex_val[i]<='F'){
      ans += x*(hex_val[i]-55);
    }
    x*=16;
  }
  return ans;
}

int main(){
  int n;
  int c;
  int ans;
  string hex_val;


  cout<<"1. Binary To Decimal\n"
        "2. Octal To Decimal\n"
        "3. Hexadecimal to Decimal\n";
  cout<<"Enter your option: ";
  cin>>c;

  switch (c) {
    case 1:
      cout<<"Binary: ";
      cin>>n;
      ans=binaryToDecimal(n);
      cout<<"Decimal: "<<ans<<endl;
      break;

    case 2:
      cout<<"Octal: ";
      cin>>n;
      ans=OctalToDecimal(n);
      cout<<"Decimal: "<<ans<<endl;
      break;

    case 3:
      cout<<"Hexadecimal: ";
      cin>>hex_val;
      ans=HexadecimalToDecimal(hex_val);
      cout<<"Decimal: "<<ans<<endl;
      break;

    default:
      cout<<"Please enter a valid option."<<endl;

  }
}
