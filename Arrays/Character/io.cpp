/*
C++ program to print a predefined character array
and
take char input from user.
*/
#include "iostream"
using namespace std;

int main(){

//Output a predefined array
  char arr[10] = "sourabh";
  int i=0;

  while(arr[i] != 0){
    cout<<arr[i];
    i++;
  }
  cout<<endl;

  //Output a user char array
  char c[10];
  cin>>c;
  cout<<c<<endl;

}
