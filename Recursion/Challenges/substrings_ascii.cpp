/*
Program to generate substrings with ASCII number
*/
#include "iostream"
using namespace std;

void substrASCII(string str, string ans){
  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }

  char ch = str[0];
  int code = ch; //Returns ascii
  string ros = str.substr(1);

  substrASCII(ros, ans);
  substrASCII(ros, ans+ch);
  substrASCII(ros, ans + to_string(code));
}

int main(){
  string str;
  getline(cin, str);

  substrASCII(str, "");
  return 0;
}
