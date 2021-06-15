/*
Given a "2xn" board and tiles of size "2x1", count the 
number of ways to tile the given board using these tiles.
Time Complexity - O(2^n)
Space Complexity - O(2^n)

"Similar to finding nth fibonacci number"
*/
#include "iostream"
using namespace std;

int tiling(int n){
    //For 0 tiles, 0 ways
    if(n==0)
        return 0;
    
    //For 1 title, 1 way(vertical)
    if(n==1)
        return 1;

    //n-1 for placing tiles in vertical order
    //n-2 for placing tiles in horizontal order
    return tiling(n-1)+tiling(n-2);  
}

int main(){
    int n;
    cin>>n;

    cout<<tiling(n)<<endl;

    return 0;
}