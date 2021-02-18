/*
Given a square matrix A and its number of rows (or columns) N,
return the transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row & column indices of the matrix.

1<=N<=100
*/
#include "iostream"
using namespace std;

int main(){
  int n;
  cout<<"Enter n : ";
  cin>>n;

  int a[n][n];

  cout<<"Enter elements: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>a[i][j];
    }
  }

  int temp;

  for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
      temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
    }
  }

  cout<<"Transpose is :"<<endl;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }

}
