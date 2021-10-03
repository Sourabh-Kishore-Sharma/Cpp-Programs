/*
For a given array & an integer K, check if
any subarrya of size K exists in the array
such that concatenation of elements form a palindrome.
*/
#include "iostream"
#include "cmath"
using namespace std;

bool isPalindrome(int n){
    int d;
    int rev=0;
    int temp = n;

    while(temp>0){
        d = temp%10;
        rev = rev*10+d;
        temp = temp/10;
    }

    if(rev==n)
        return true;
    return false;
}

void KsizePalindrome(int arr[], int n, int k){
    //Store start & end index of the subarray
    pair<int,int> ans;
    int num = 0;
    bool found = false;

    for(int i=0; i<k; i++){
        num = num*10 + arr[i];
    }

    if(isPalindrome(num)){
        ans = make_pair(0,k-1);
        found = true;
    }        

    for(int i=k; i<n; i++){
        if(found)
            break;
        
        num = (num%(int)pow(10,k-1))*10+arr[i];

        if(isPalindrome(num)){
            ans = make_pair(i-k+1,i);
            found = true;
        }
    }

    if(!found){
        cout<<-1<<endl;
        return;
    }

    for(int i=ans.first; i<=ans.second; i++){
        cout<<arr[i];
    }cout<<endl;
}


int main(){
    int arr[] = {2,3,5,1,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    KsizePalindrome(arr,n,k);
}