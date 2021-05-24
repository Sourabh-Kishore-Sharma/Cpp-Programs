/*
empty() function returns 1 if a string is empty, else 0.
*/
#include "iostream"
#include "string"

using namespace std;

int main(){
  string str;
  str = "abcd";

  cout<<str.empty()<<endl;

  str.clear();

  cout<<str.empty()<<endl;

  return 0;
}
