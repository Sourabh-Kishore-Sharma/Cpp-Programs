/*
Erase function lets a delete a substring.
str.erase(start_i, number_of_characters)
*/
#include "iostream"
#include "string"

using namespace std;

int main(){
  string str = "completed";

  str.erase(4,5);

  cout<<str<<endl;
}
