/*
Given an array find its peak element, peak element is one which is
greater than both its left & right neighbours.
*/
#include "iostream"
using namespace std;

int findPeak(int arr[], int l, int r, int n){
    if(l<r){
        int mid = (l+r)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
            return mid;
        }
        else if(mid>0 && (arr[mid-1]>arr[mid])){
            return findPeak(arr,l,mid-1,n);
        }
        else{
            return findPeak(arr,mid+1,r,n);
        }
    }
}

int main(){
    int arr[] = {10,20,15,2,23,90,67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findPeak(arr,0,n-1,n-1)<<endl;
}