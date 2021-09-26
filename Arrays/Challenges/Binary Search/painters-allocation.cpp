/*
A painter paints 1 unit of board in 1 unit of time & each painter 
will paint consecutive boards. Find the minimum time that will be
required to paint all the boards.
*/
#include "iostream"
#include "climits"
using namespace std;

bool isFeasible(int arr[], int n, int k, int mid){
    int painters = 1;
    int allocation = 0;
    for(int i=0; i<n; i++){
        if((allocation+arr[i])>mid){
            painters++;
            allocation = arr[i];
        }
        else
            allocation += arr[i];
    }
    return painters<=k;
}

int painterPartition(int arr[], int n, int k){
    //Store array's max value in mini
    //And sum of the whole array in maxi
    int mini = INT_MIN, maxi = 0;
    for(int i=0; i<n; i++){
        mini = max(mini, arr[i]);
        maxi += arr[i];
    }

    while(mini<=maxi){
        int mid = (mini+maxi)/2;
        if(isFeasible(arr, n, k, mid)){
            maxi = mid-1;
        }
        else{
            mini = mid+1;
        }
    }
    return mini;
}

int main(){
    int boards[] = {10,20,30,40};
    //k = number of painters
    int k = 2;
    int n = sizeof(boards)/sizeof(boards[0]);
    
    cout<<painterPartition(boards,n,k)<<endl;
}