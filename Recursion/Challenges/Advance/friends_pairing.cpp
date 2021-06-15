/*
Find the number of ways in which n friends can remain single or
can be paired up.

Time Complexity - O(n)
Space Complexity - O(n)

Two ways -  i) ith friend does not gets paired
            ii) n-1 options to pair with someone
*/
#include "iostream"
using namespace std;

int friendsPair(int n){
    if(n==0 || n==1 || n==2)
        return n;
    
    return friendsPair(n-1) + friendsPair(n-2)*(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<friendsPair(n)<<endl;

    return 0;
}
