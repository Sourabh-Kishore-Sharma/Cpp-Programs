#include "iostream"
#include "string"

using namespace std;

int main(){

  string s1 = "fam";
  string s2 = "ily";

  //Appending
    //Method 1
    cout<<s1.append(s2)<<endl;

    //Method 2
    s1 = "fam";
    s2 = "ily";
    s1 = s1 + s2;
    cout<<s1<<endl;

    //Method 3
    s1 = "fam";
    s2 = "ily";
    cout<<s1 + s2 <<endl;

  //Accessing elements
  cout<<s1[0]<<endl;

  //Clearing a string variable
  string eg = "My name is Sourabh Sharma.";
  cout<<"Before clearing : "<<eg<<endl;
  eg.clear();
  cout<<"After clearing : "<<eg<<endl;

  return 0;
}
