/*
Given non-negative integers representing an elevation map where
the width of each bar is 1, compute how much water it can trap
after raining.

The following is the brute force approach.

For each block,
    a) Find max left and max right heights.
    b) Calculate water level = min(left_max, right_max)
    c) Calculate trapped water = water level - block height
Finally add all trapped water.
*/
#include "iostream"
using namespace std;

int waterTrapped(int heights[], int n){
    int left_max=0, right_max=0;
    int ans = 0;

    for(int i=1; i<n-1; i++){
        //Find left-max
        for(int j=i; j>=0; j--){
            left_max = max(heights[j],left_max);
        }
        //Find right-max
        for(int j=i; j<n; j++){
            right_max = max(heights[j],right_max);
        }
        
        int water_level = min(left_max,right_max);
        int amt = water_level-heights[i];
        ans += amt;
    }
    return ans;
}

int main(){
    int heights[] = {4, 2, 0, 3, 2, 5};
    int n = sizeof(heights)/sizeof(heights[0]);
    cout<<waterTrapped(heights,n)<<endl;
}
