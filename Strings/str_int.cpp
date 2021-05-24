/*
stoi() - Converts string to int
to_string() - Converts int to string
*/
#include "iostream"
#include "string"

using namespace std;

int main(){
  string str = "2020";

  int str_int = stoi(str);
  cout<<str_int++<<endl;

  int x = 111;
  string s = to_string(x);
  cout<<s+"0"<<endl;
}
