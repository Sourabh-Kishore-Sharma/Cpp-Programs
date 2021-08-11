/*
Largest rectangle in a hostogram using brute force.

Given an array, each element represents the height of the histogram's bar
and the width of each bar is 1, find the area of largest rectangle in the
histogram.
*/
#include "iostream"
#include "climits"
using namespace std;

int main(){
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int min_h,l, area=0;
    for(int i=0; i<n; i++){
        min_h = INT_MAX;
        for(int j=i; j<n; j++){
            min_h = min(arr[j], min_h);
            l = j-i+1;
            area = max(area, l*min_h);
        }
    }
    cout<<area<<endl;
}