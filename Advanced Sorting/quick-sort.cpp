/*
Program to implement quick sort using divide and conquer algorithm.
Avg. Time Complexity - O(nlogn)
Worst Time Complexity - O(n^2)
*/
#include "iostream"
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    //Set pivot to last element
    int pivot = arr[r];
    int i=l-1;
    
    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    //Now, i is pointing to last element which is less than pivot
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        //Get pivot index
        int pi = partition(arr, l, r);

        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}