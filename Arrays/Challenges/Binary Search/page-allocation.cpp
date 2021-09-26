#include "iostream"
#include "climits"
using namespace std;

int minElement(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}

int sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

bool isFeasible(int arr[], int n, int k, int ans){
    int students = 1;
    int sum = 0;
    for(int i=0; i<n; i++){
        if((sum+arr[i])>ans){
            students++;
            sum = arr[i];
        }
        else{
            sum += arr[i];
        }
    }
    return students<=k;
}

int minPages(int arr[], int n, int k){
    int min = minElement(arr,n);
    int max = sum(arr,n);

    int ans = 0;
    while(min<=max){
        int mid = (min+max)/2;
        if(isFeasible(arr, n, k, mid)){
            ans = mid;
            max = mid-1;
        }
        else{
            min = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<minPages(arr,n,k)<<endl;
}