/*
- Find the count of every distinct element in the array.
- Calculate the position of each element in the sorted array.
*/
#include "iostream"
using namespace std;

void countSort(int arr[], int n){
    //Find max element which will be the size of count array
    int k=0;
    for(int i=0; i<n; i++){
        k = max(arr[i],k);
    }

    //Find count of every distinct element
    int count[10]={0};
    for(int i=0; i<n; i++){
        count[arr[i]] += 1;
    }

    //Modify the count array to store the position
    //of element in the sorted array
    for(int i=1; i<=k; i++){
        count[i] += count[i-1];
    }

    //Create an output array
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    countSort(arr, n);
    return 0;
}