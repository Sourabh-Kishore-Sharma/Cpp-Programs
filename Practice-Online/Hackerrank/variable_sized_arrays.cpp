/*
https://www.hackerrank.com/challenges/variable-sized-arrays

refer PDF for problem statement

Input
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Output
5
9
*/
#include "iostream"
using namespace std;

int main() {
    int n, q;
    cin>>n>>q;

    //Create an array of arrays
    int** arr = new int* [n];
    
    //Take input of n sized array with l elements of each
    for(int i=0; i<n; i++){
        int l;
        cin>>l;
        arr[i] = new int[l];
        for(int j=0; j<l; j++){
            cin>>arr[i][j];
        }
    }
    
    //Input queries
    int i,j;
    cout<<endl;
    for(int k=0; k<q; k++){
        cin>>i>>j;
        cout<<arr[i][j]<<endl;
    }
    return 0;
}
