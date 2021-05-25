#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

int main(){

  string str = "xyzabc";

  sort(str.begin(), str.end());

  cout<<str<<endl;
}
