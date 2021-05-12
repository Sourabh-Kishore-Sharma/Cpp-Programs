#include "iostream"
using namespace std;

int main(){
  int n,m;
  cout<<"Row: ";
  cin>>n;
  cout<<"Columns: ";
  cin>>m;

  int a[n][m];
  cout<<"Enter elements"<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>a[i][j];
    }
  }

  int row_start=0, row_end=n-1;
  int col_start=0, col_end=m-1;

  int count = 0;
  while(row_start<=row_end && col_start<=col_end && count<=n*m){

    //Printing row start
    for(int col=col_start; col<=col_end && count<=n*m; col++){
      cout<<a[row_start][col]<<" ";
      count++;
    }

    row_start++;


    //Printing col start
    for(int row=row_start; row<=row_end && count<=n*m; row++){
      cout<<a[row][col_end]<<" ";
      count++;
    }

    col_end--;


    //Printing row end
    for(int col=col_end; col>=col_start && count<=n*m; col--){
      cout<< a[row_end][col]<<" ";
      count++;
    }

    row_end--;


    //Printing col col_start
    for(int row=row_end; row>=row_start && count<=n*m; row--){
      cout<<a[row][col_start]<<" ";
      count++;
    }

    col_start++;
    count++;
  }
  cout<<endl;
}
