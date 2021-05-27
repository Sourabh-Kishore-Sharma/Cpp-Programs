/*
Program to Swap Cases of an input string using inbuilt function transform.

transform(string start iterator, string end iterator,
          start pos, operation)
*/

#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main(){

  string str;
  getline(cin, str);

  transform(str.begin(), str.end(), str.begin(), ::toupper);

  cout<<str<<endl;

  transform(str.begin(), str.end(), str.begin(), ::tolower);

  cout<<str<<endl;

  return 0;
}
