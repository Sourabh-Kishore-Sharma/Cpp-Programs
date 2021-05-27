/*
Program to Swap Cases of an input string
ASCII Code of A = 065
ASCII Code of a = 097
*/
#include "iostream"
#include "string"

using namespace std;

int main(){

  string str;

  getline(cin, str);

  //Convert lower into upper and vice-versa.
  for(int i=0; i<str.size(); i++){
    //Lower to upper
    if(str[i]>='a' && str[i]<='z')
      str[i] -= 32;
    //Upper to Lower
    else if(str[i]>='A' && str[i]<='Z')
      str[i] += 32;
  }

  cout<<str<<endl;

  return 0;
}
