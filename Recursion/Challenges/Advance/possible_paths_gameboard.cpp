/*
Count the number of paths possible from start point to
end point in gameboard.
*/
#include "iostream"
using namespace std;

int countPaths(int s, int e){
    if(s==e)
        return 1;
    
    if(s>e)
        return 0;

    int count = 0;
    for(int i=1; i<=6; i++){
        count += countPaths(s+i, e);
    }

    return count;
}

int main(){
    int start, end;
    cin>>start>>end;

    cout<<countPaths(start, end)<<endl;
}