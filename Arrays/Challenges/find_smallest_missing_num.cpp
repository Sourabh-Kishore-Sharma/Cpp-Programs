/*
Given an array arr[] of N integers including 0. The task is to find the
smallest positive number missing from the array.
1 <= N <= 10^6
-10^6 <= Ai <= 10^6
*/
#include "iostream"
using namespace std;

int main(){
  int n;
  cout<<"Enter arrary size: ";
  cin>>n;

  int a[n];
  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  char check[n];
  for(int i=0;i<n;i++){
    check[i]='F';
  }

  for(int i=0;i<n;i++){
    if(a[i]>=0){
      check[a[i]] = 'T';
    }
  }

  for(int i=0;i<n;i++){
    if(check[i] == 'F'){
      cout<<"Missing smallest positive number: "<<i<<endl;
      return 0;
    }
    else{
      cout<<"Not Found."<<endl;
      return 0;
    }
  }
}
