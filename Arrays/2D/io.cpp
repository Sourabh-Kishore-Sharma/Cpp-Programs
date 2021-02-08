/*
Program to take input for a 2D matrix
& displaying the same.
*/
#include "iostream"
using namespace std;

int main(){
  int n,m;

  cout<<"Rows: ";
  cin>>n;
  cout<<"Columns: ";
  cin>>m;

  int a[n][m];
  //Input
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>a[i][j];
    }
  }

  //Output
  cout<<"Matrix is: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }


}
