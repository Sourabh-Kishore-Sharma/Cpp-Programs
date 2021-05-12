/*
Program to check whether entered string
is palindrome or not.
*/
#include "iostream"
#include "cstring"
using namespace std;

int main(){

  char arr[50];
  cin>>arr;

  int len = strlen(arr);

  bool check = true;

  for(int i=0; i<len; i++){
    if(arr[i] != arr[len-1-i]){
      cout<<arr[i]<<" "<<arr[len-1-i]<<endl;
      check=false;
      break;
    }
  }
  if(check == true)
    cout<<"It is a palindrome."<<endl;
  else
    cout<<"Not a palindrome."<<endl;
}
