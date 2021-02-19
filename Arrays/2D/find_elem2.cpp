/*
Search for a element in the matrix.

-Integers in each row are sorted in ascending from left to right.
-Integers in each column are sorted in ascending from top to bottom.

1<=N,M<=1000

Time complexity = N+M

Start from top right corner
if elem is less than current than goto left else down
*/
#include "iostream"
using namespace std;

int main(){
  int n,m;
  cout<<"Enter dimension: ";
  cin>>n>>m;

  int a[n][m];

  cout<<"Enter elements: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>a[i][j];
    }
  }

  int target;
  cout<<"Enter target element: ";
  cin>>target;

  //Top right position
  int r=0,c=m-1;
  while(r<n && c>=0){
    if(a[r][c] == target){
      cout<<"Found"<<endl;
      return 0;
    }
    else if (a[r][c] < target)
      r++;
    else
      c--;
    }

  cout<<"Not Found"<<endl;
}
