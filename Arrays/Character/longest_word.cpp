/*
Program to find longest word in a sentence.
Print the length as well as the word.
*/
#include "iostream"
#include "string"
using namespace std;

int main(){

  int len;
  cin>>len;

  cin.ignore();
  char arr[len+1];

  cin.getline(arr,len);


  int i=0;
  int curLen=0, maxLen=0;

  //Index of longest word
  int start=0, maxst=0;

  while(1){
    if(arr[i] == ' ' || arr[i] == '\0')
    {
      if(curLen > maxLen){
        maxLen=curLen;
        maxst=start;
      }
      curLen=0;
      start=i+1;
    }
    else
      curLen++;

    if(arr[i] == '\0')
      break;
    i++;
  }

  cout<<maxLen<<endl;
  for(int i=0; i<maxLen;i++){
    cout<<arr[i+maxst];
  }
  cout<<endl;
}
