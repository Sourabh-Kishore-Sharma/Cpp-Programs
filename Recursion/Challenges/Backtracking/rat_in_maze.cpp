/*
Given a maze(2D matrix) with obstacles, starting from (0,0),
you have to reach (n-1,n-1). If you are currently on (x,y),
you can move to (x+1,y) or (x,y+1).
Time Complexity - O(n^2)
Space complexity - O(n^2)
*/
#include "iostream"
using namespace std;

//Function to check if rat can to go (x,y)
bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1)
        return true;
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr){
    if( (x==n-1) && (y==n-1)){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr, x, y, n)){
        solArr[x][y]=1;

        //Go towards right
        if(ratInMaze(arr, x+1, y, n, solArr)){
            return true;
        }

        //Go towards down
        if(ratInMaze(arr, x, y+1, n, solArr)){
            return true;
        }

        //If both direction not possible, backtrack
        solArr[x][y]=0;
        return false;
    }
    //If x!=n-1 or y!=n-1
    return false;
}

int main(){
    int n;
    cin>>n;

    //Declare 2D matrix
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    //Input 2D matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    //Declare & initialise solution array with 0
    int** solArr = new int*[n];
    for(int i=0; i<n; i++){
        solArr[i] = new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j] = 0;
        }
    }

    cout<<endl;

    if(ratInMaze(arr, 0, 0, n, solArr)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
/*
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
*/
}