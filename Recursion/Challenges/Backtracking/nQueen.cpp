/*
You have to place n queens on an nxn chessboard such that,
they can't attack each other.

- Each row can have atmost one Queen
- Should not placed diagonally
*/
#include "iostream"
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    //Check if queen already present in column y
    for(int row=0; row<x; row++){
        if(arr[row][y] == 1)
            return false;
    }
    
    //Check for left diagonal
    int row = x;
    int col = y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1)
            return false;
        row--;
        col--;
    }

    //Check for right diagonal
    row = x;
    col = y;
    while(row>=0 && col<n){
        if(arr[row][col]==1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr, int x, int n){
    //If row >= chessboard dimention
    if(x>=n)
        return true;
    
    for(int col=0; col<n; col++){
        if(isSafe(arr, x, col, n)){
            arr[x][col]=1;

            if(nQueen(arr, x+1, n)){
                return true;
            }
            //Backtracking
            arr[x][col] = 0;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    //Initialize array
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }    
    }


    //Print array
    if(nQueen(arr, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;    
        }
    }
}