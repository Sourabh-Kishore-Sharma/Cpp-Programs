/*
Given an array A of 0s and 1s, we may change upto K values from 0 to 1.
Return the length of the longest(contiguous) array.
*/
#include "iostream"
using namespace std;

int maxOnes(int a[], int n, int k){
    int zero_cnt=0, i=0, ans=0;
    
    for(int j=0; j<n; j++){
        if(a[j]==0)
            zero_cnt++;
        while(zero_cnt>k){
            if(a[i]==0)
                zero_cnt--;
            i++;
        }
        ans = max(ans, j-i+1);
    }
    return ans;
}

int main(){
    int arr1[] = {1,1,1,0,0,0,1,1,1,1,0};
    int arr2[] = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    cout<<maxOnes(arr1, n1, 2)<<endl;
    cout<<maxOnes(arr2, n2, 3)<<endl;
}