/*
Program to remove duplicates from the string.
*/
#include "iostream"
using namespace std;

string rmDuplicates(string str){
  if(str.length()==0)
    return "";

  char ch = str[0];
  string ans = rmDuplicates(str.substr(1));

  if(ch == ans[0])
    return ans;
  return ch+ans;

}

int main(){
  string str;
  getline(cin, str);

  cout<<rmDuplicates(str)<<endl;
  return 0;
}
