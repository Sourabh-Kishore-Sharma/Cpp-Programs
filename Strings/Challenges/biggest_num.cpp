/*
Form the biggest number from the numeric string
"53241" to 54321
*/

#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main(){

  string str;
  getline(cin, str);

  sort(str.begin(), str.end(), greater<int>());

  cout<<str<<endl;
  return 0;
}
