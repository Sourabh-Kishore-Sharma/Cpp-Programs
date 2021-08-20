/*
Given a string, find the length of the longet substring 
without repeating characters.
*/
#include "iostream"
using namespace std;

int main(){
    string s = "pwwkew";

    int check[256];
    for(int i=0; i<256; i++){
        check[i] = -1;
    }

    int start = -1;
    int len = 0;
    for(int i=0; i<s.length(); i++){
        if( check[int(s[i])] == -1){
            check[int(s[i])] = i;
        }
        else{
            start = check[int(s[i])];
            check[int(s[i])] = i;
        }
        len = max(len, i-start);
    }
    cout<<len<<endl;
}