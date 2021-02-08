/*
Find a given element in the Matrix
(2D array).
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

  int k;
  cout<<"Element to search: ";
  cin>>k;

  //Finding element k
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(a[i][j] == k){
        cout<<"Element found at: "<<i<<","<<j<<endl;
        return 0;
      }
    }
  }
  cout<<"Element not found."<<endl;
}
