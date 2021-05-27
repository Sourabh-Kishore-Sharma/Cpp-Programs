/*
Program to return highest frequency of a character in a string.
*/

#include "iostream"
#include "string"

using namespace std;

int main(){
  string str;
  getline(cin, str);

  int freq[26];
  //initialize a frequency array with 0
  for(int i=0; i<26; i++)
    freq[i] = 0;

  //Interate over string
  for(int i=0; i<str.size(); i++)
    freq[str[i]-'a'] += 1;

  int mx=0;
  char ans;
  //Iterate over frequency array to find max freq
  for(int i=0; i<26; i++){
    if (freq[i]>mx){
      mx = freq[i];
      ans = i+'a';
    }
  }

  cout<<"Character "<<ans<<" appears : "<<mx<<endl;
  return 0;
}
