#include "iostream"
#include "string"

using namespace std;

int main(){

  //Taking input from user
  string str;
  cin>>str;
  cout<<str<<endl;

  //Pre-defined string
  string str_1 = "Sourabh";
  cout<<str_1<<endl;

  //Pre-defined string using specified character
  string str_2(5,'s');
  cout<<str_2<<endl;

  //Input from CLI with spaces
  string str_3;
  cin.ignore();
  getline(cin, str_3);
  cout<<str_3<<endl;

}
