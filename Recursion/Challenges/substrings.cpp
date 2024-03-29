/*
Program to get substrings of a given string using Recursion.
*/
#include "iostream"
using namespace std;

void substrings(string str, string ans) {

  if(str.length()==0){
    cout<<ans<<endl;
    return;
  }

  char ch = str[0];
  string ros = str.substr(1);

  //Simulataneously add nothing to the string & add one character
  substrings(ros, ans);
  substrings(ros, ans+ch);
}

int main(){
  string str;
  getline(cin, str);

  substrings(str, "");

  return 0;
}
