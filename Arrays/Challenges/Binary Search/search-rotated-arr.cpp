/*
We are given an ascending sorted array that has been 
rotated from a pivot point (unknown to us) and an element X.
Search for X in the array with complexity less than O(n)
*/
#include "iostream"
using namespace std;

int searchRotatedArray(int arr[], int key, int left, int right){
    if(left>right)
        return -1;
    
    int mid = (left+right)/2;
    if(key == arr[mid])
        return mid;
    
    //Left sub-array is sorted
    if(arr[left]<=arr[mid]){
        if(key>=arr[left] && key<=arr[mid]){
            //Search left half
            return searchRotatedArray(arr,key,left,mid-1);
        }
        else{
            //Search in right half
            return searchRotatedArray(arr,key,mid+1,right);
        }
    }
    //Right sub-array is sorted
    else{
        if(key>=arr[mid] && key<=arr[right]){
            //Search in right-half
            return searchRotatedArray(arr,key,mid+1,right);
        }
        else{
            //Search in left-half
            return searchRotatedArray(arr,key,left,mid-1);
        }
    }
}

int main(){
    int arr[] = {4,5,6,7,8,9,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 9;

    cout<<searchRotatedArray(arr,key,0,n-1)<<endl;
}