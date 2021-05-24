/*
insert() function lets you insert a substring at index i
insert(i, string)
*/
#include "iostream"
#include "string"

using namespace std;

int main(){
  string str;
  str = "honey";

  str.insert(5,"bunny");

  cout<<str<<endl;
}
