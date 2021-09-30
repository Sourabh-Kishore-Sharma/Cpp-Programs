/*
For a given array & integers K and X, find
the maximum sum subarray of size K and
having sum less than X.
*/
#include "iostream"
#include "climits"
using namespace std;

int maxSum(int arr[], int n, int k, int x){
    int sum = 0;
    
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    int maxi = INT_MIN;
    if(sum<x)
        maxi = sum;

    int start = 0, end = k;
    for(int i=k; i<n; i++){
        //i-k is the start pointer
        sum -= arr[i-k];
        sum += arr[i];

        if(sum<x)
            maxi = max(maxi,sum);
    }
    return maxi;
}

int main(){
    int arr[] = {7,5,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int x = 20;

    cout<<maxSum(arr, n, k, x)<<endl;
}