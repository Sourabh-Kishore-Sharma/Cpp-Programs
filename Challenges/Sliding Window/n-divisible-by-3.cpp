/*
For a given array & an integer K, check if any subarray of 
size K exists in the array such that elements in the subarray form a
number divisible by 3.

{8,23,45,12,56,4}
K = 3

12564 - number formed by last 3 indexes is divisible by 3.
*/
#include "iostream"
using namespace std;

void ksubarray(int arr[], int n, int k){
    //Store start and end index of the numbers
    pair<int,int> ans;

    int sum = 0;
    bool found = false;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    if(sum%3==0){
        ans = make_pair(0,k-1);
        found = true;
    }

    for(int i=k; i<n; i++){
        if(found)
            break;
        
        sum += arr[i]-arr[i-k];

        if(sum%3==0){
            ans = make_pair(i-k+1,i);
            found = true;
        }
    }

    if(!found){
        cout<<-1<<endl;
        return;
    }

    for(int i=ans.first; i<=ans.second; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {8,23,45,12,56,4};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    ksubarray(arr, n, k);
}