/*
substr() returns a substring from index i to n characters
substr(i, n)
*/
#include "iostream"
#include "string"

using namespace std;

int main(){
  string str = "Computer";

  string str_sub = str.substr(0,4);
  cout<<str_sub<<endl;
}
