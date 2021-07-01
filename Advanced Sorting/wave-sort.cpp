/*
Given an array, transform the array such that,
a[0]>=a[1]<=a[2]>=a[3]<=a[4]...

        a[0]          a[2]
      -    -         -    -
-    -      -       -      -
 -  -        -     -        -
   -          a[1]          a[3]
*/
#include "iostream"
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void waveSort(int arr[], int n){
    for(int i=1; i<=n-1; i+=2){

        if(arr[i] > arr[i-1])
            swap(arr, i , i-1);

        if(arr[i] > arr[i+1] && i<n-1)
            swap(arr, i, i+1);
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    waveSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}