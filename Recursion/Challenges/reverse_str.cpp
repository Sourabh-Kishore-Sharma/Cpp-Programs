/*
Program to reverse a string using recursion.
*/
#include "iostream"
using namespace std;

void reverse(string str){
  //base case
  if(str.length() == 0)
    return;

  //rest of the string, ros
  string ros = str.substr(1);
  reverse(ros);
  cout<<str[0];
}


int main(){
  string str;
  getline(cin, str);

  reverse(str);
  cout<<endl;
}
