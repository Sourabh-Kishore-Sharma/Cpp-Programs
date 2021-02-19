/*
Given two 2D arrays of sizes n1xn2 and n2xn3.
Multiply these matrices and output the multiplied matrix.

1<=n1,n2,n3<=300
*/
#include "iostream"
using namespace std;

int main(){
  int n1,n2,n3,n4;

  cout<<"Dimension of 1st matrix: ";
  cin>>n1>>n2;

  cout<<"Dimension of 2nd matrix: ";
  cin>>n3>>n4;

  if(n2 != n3){
    cout<<"Incorect Dimensions."<<endl;
    return -1;
  }
  else{
    int a[n1][n2];
    int b[n3][n4];

    cout<<"Elements of 1st: "<<endl;
    for(int i=0; i<n1; i++){
      for(int j=0; j<n2; j++){
        cin>>a[i][j];
      }
    }

    cout<<"Elements of 2nd: "<<endl;
    for(int i=0; i<n3; i++){
      for(int j=0; j<n4; j++){
        cin>>b[i][j];
      }
    }

    int c[n1][n3];

    for(int i=0; i<n1; i++){
      for(int j=0; j<n3; j++){
        c[i][j]=0;
      }
    }



    for(int i=0; i<n1; i++){
      for(int j=0; j<n2; j++){
        for(int k=0; k<n2; k++){
          c[i][j] += a[i][k]*b[k][j];
        }
      }
    }



    for(int i=0; i<n1; i++){
      for(int j=0; j<n3; j++){
        cout<<c[i][j]<<" ";
      }
      cout<<endl;
    }

  }
}
