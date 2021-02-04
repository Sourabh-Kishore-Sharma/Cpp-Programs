/*
n=5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include "iostream"
using namespace std;

int main()
{
  int n;
  int i,j,k=1;

  cout<<"Enter row number for Floyd's Triangle.\n";
  cin>>n;

  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      cout<<k<<" ";
      k+=1;
    }
    cout<<endl;
  }
}
