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
