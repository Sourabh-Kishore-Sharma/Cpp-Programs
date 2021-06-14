/*
Count the number of paths possible in a maze.
- Maze with no obstacles
- Maze with dimension nxn
- Can move either right(i) or down(j)
*/
#include "iostream"
using namespace std;

int countPaths(int n, int i, int j){
    if(i==n-1 && j==n-1)
        return 1;
    
    if(i>=n || j>=n)
        return 0;
    
    return countPaths(n, i+1, j)+countPaths(n, i, j+1);
}

int main(){
    int n, i, j;
    cin>>n>>i>>j;

    cout<<countPaths(n, i, j)<<endl;
}
