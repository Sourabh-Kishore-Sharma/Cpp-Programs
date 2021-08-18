/*
Given an array and a value, find if there exists three numbers
whose sum is equal to the given value.

Using two pointer technique
O(N^2)

1. Sort the array
2. Traverse the array & fix the first element of the triplet.
   If there exists two elements having sum equal to target-arr[i];
*/
#include "iostream"
#include "algorithm"
using namespace std;

int main(){
    int arr[] = {12, 3, 7, 1, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 24;

    sort(arr, arr+n);

    bool found = false;

    for(int i=0; i<n; i++){
        int low=i+1, high=n-1;

        while(low<high){
            int current = arr[i]+arr[low]+arr[high];
            if(current == target)
                found = true;
            
            if(current<target)
                low++;
            else    
                high--;
        }
    }
    
    if(found)
        cout<<"Sum Found."<<endl;
    else
        cout<<"Sum not found."<<endl;
}