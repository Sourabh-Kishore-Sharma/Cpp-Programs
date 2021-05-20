#include "iostream"
using namespace std;

int main(){
  int m,n;

  cin>>m>>n;

  //Declare memory block of size n*m
  int* arr = new int[n*m];

  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>*(arr+i*n+j);
    }
  }

  //Print 2D array
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<*(arr+i*n+j)<<" ";
    }
    cout<<endl;
  }

  //Deallocate memory
  delete[]arr;
  arr=NULL;
}
