#include "iostream"
using namespace std;

int main()
{
  int n;
  int i,j;

  cout<<"Enter a number: ";
  cin>>n;
  int space;

//Upper Pattern
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
      cout<<"*";
    space=n*2-i*2;
    while(space>0)
    {
      cout<<" ";
      space-=1;
    }
    for(j=1;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }

//Lower pattern
for(i=n;i>=1;i--)
{
  for(j=1;j<=i;j++)
    cout<<"*";
  space=n*2-i*2;
  while(space>0)
  {
    cout<<" ";
    space-=1;
  }
  for(j=1;j<=i;j++)
    cout<<"*";
  cout<<endl;
}

}
