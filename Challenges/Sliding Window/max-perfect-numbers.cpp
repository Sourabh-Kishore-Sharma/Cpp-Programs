/*
For a given array & an integer K, find the
maximum perfect numbers in a subarray of size K.

Perfect Number is a number if it is equal to the
sum of its proper divisors (positive divisors)
except for the number.
*/
#include "iostream"
#include "cmath"
using namespace std;

bool isPerfect(int n){
    int divisors_sum = 1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            if(i==n/i)
                divisors_sum += i;
            else
                divisors_sum += i+n/i;
        }
    }
    if(divisors_sum == n)
        return true;
    return false;
}

int maxSum(int arr[], int n, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }

    int maxi = sum;
    
    for(int i=k; i<n; i++){
        //i-k denotes the start position
        sum -= arr[i-k];
        sum += arr[i];

        maxi = max(maxi,sum);
    }

    return maxi;
}

int findMaxPerfectNumbers(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(isPerfect(arr[i]))
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    return maxSum(arr, n, k);
}

int main(){
    int arr[] = {1,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    cout<<findMaxPerfectNumbers(arr, n, k)<<endl;
}