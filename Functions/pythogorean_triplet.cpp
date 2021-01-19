#include "iostream"
using namespace std;

bool check(int x,int y,int z){
  int a,b,c;
  a=max(x,max(y,z));

  if(a==x){
      b=y;
      c=z;
    }
  else if(a==y){
    b=x;
    c=z;
  }
  else{
    b=x;
    c=y;
  }
  if(a*a==b*b+c*c)
    return true;
  return false;

}

int main(){
  int x,y,z;

  cout<<"Enter side one value: ";
  cin>>x;
  cout<<"Enter side two value: ";
  cin>>y;
  cout<<"Enter side three value: ";
  cin>>z;

  if(check(x,y,z))
    cout<<"It is a Pythogorean Triplet.\n";
  else
    cout<<"It is not a Pythogorean Triplet.\n";
}
