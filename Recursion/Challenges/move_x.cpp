/*
Program to move all x to the end of the string.
*/
#include "iostream"
using namespace std;

string moveX(string str){
  if(str.length() == 0)
    return "";

  char ch = str[0];
  string ans = moveX(str.substr(1));

  if(ch == 'x')
    return ans+ch;
  return ch+ans;
}

int main(){
  string str;
  getline(cin, str);

  cout<<moveX(str)<<endl;
}
