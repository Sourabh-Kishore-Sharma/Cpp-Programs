/*
Given non-negative integers representing an elevation map where
the width of each bar is 1, compute how much water it can trap
after raining.

Following is the optimal approach using Arrays for storing left and right limits.
Time Complexity - O(n)
*/
#include "iostream"
#include "vector"
using namespace std;

int waterTrapped(int heights[], int n){
    int left[n], right[n];

    //Traverse array for left limit for each bar
    int left_max = heights[0];
    for(int i=1; i<n; i++){
        left[i] = left_max;
        left_max = max(left_max, heights[i]);
    }

    //Traverse array for right limit for each bar
    int right_max = heights[n-1];
    for(int i=n-2; i>=0; i--){
        right[i] = right_max;
        right_max = max(right_max, heights[i]);
    }

    //Calculate trapped water for each bar
    int trapped_water = 0;
    for(int i=0; i<n-1; i++){
        if(heights[i]<left[i] && heights[i]<right[i]){
            trapped_water += min(left[i],right[i])-heights[i];
        }
    }
    return trapped_water;
}

int main(){
    int heights[] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(heights)/sizeof(heights[0]);

    cout<<waterTrapped(heights, n)<<endl;
}