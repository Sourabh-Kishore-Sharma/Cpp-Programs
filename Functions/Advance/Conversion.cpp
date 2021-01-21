#include "iostream"
using namespace std;


int binaryToDecimal(int n){
  int ans=0;
  int base=1;
  while(n!=0){
    int digit=n%10;
    ans+=digit*base;
    base*=2;
    n=n/10;
  }
  return ans;
}

int OctalToDecimal(int n){
  int ans=0;
  int base=1;
  while(n!=0){
    int digit=n%10;
    ans+=digit*base;
    base*=8;
    n=n/10;
  }
  return ans;
}

int HexadecimalToDecimal(string hex_val){
  int ans=0;
  int base=1;
  int len=hex_val.size();

  for(int i=len-1;i>=0;i--){
    if (hex_val[i]>='0' && hex_val[i]<='9'){
      ans += base*(hex_val[i]-48);
    }
    else if (hex_val[i] >= 'A' && hex_val[i]<='F'){
      ans += base*(hex_val[i]-55);
    }
    base*=16;
  }
  return ans;
}

int decimalToBinary(int n){
  int ans=0;
  int base=1;

  while(base<=n)
    base*=2;
  base=base/2;

  while(base>0){
    int q = n/base;
    n -= q*base;
    base /= 2;
    ans = ans*10 + q;
  }
  return ans;
}

int decimalToOctal(int n){
  int ans=0;
  int base=1;

  while(base<=n)
    base*=8;
  base=base/8;

  while(base>0){
    int q = n/base;
    n -= q*base;
    base /= 8;
    ans = ans*10 + q;
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
        "3. Hexadecimal to Decimal\n"
        "4. Decimal to Binary\n"
        "5. Decimal to Octal\n";
        
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

    case 4:
      cout<<"Decimal: ";
      cin>>n;
      ans=decimalToBinary(n);
      cout<<"Binary: "<<ans<<endl;
      break;

    case 5:
      cout<<"Decimal: ";
      cin>>n;
      ans=decimalToOctal(n);
      cout<<"Octal: "<<ans<<endl;
      break;

    default:
      cout<<"Please enter a valid option."<<endl;

  }
}
