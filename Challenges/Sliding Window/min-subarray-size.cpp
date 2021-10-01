/*
Given an array and an integer X, find the minimum subarray
size for which sum>X.
*/
#include "iostream"
#include "climits"
using namespace std;

int minSubarraySize(int arr[], int n, int x){
    int mini = INT_MAX;
    int sum = 0, start = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];

        while(sum>x){
            mini = min(mini,(i-start)+1);
            sum-=arr[start];
            start++;
        }
    }
    return mini;
}

int main(){
    int arr[] = {1,4,45,6,10,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 51;

    cout<<minSubarraySize(arr,n,x)<<endl;
}