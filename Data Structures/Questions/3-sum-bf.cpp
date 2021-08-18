/*
Given an array and a value, find if there exists three numbers
whose sum is equal to the given value.
O(N^3)
*/
#include "iostream"
using namespace std;

int main(){
    int arr[] = {12, 3, 7, 1, 6, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 24;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==target)
                    cout<<"Sum Found"<<endl;
            }
        }
    }
}