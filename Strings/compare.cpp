#include "iostream"
#include "string"

using namespace std;

int main(){
  string s1, s2;
  cin>>s1>>s2;
  
  cout<<s2.compare(s1)<<endl;

  if(s2.compare(s1) == 0)
    cout<<"Strings are same."<<endl;
  else
    cout<<"Strings are different."<<endl;

  return 0;
}
