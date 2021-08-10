#include "iostream"
#include "deque"
using namespace std;

void findMaxWindow(int arr[], int n, int k){
    deque<int> dq(n);

    //Find max for the first window
    int i;
    for(i=0; i<k; i++){
        //Remove useless elements
        while( (!dq.empty()) && arr[i]>arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    //Iterate through the rest of the array
    for(; i<n; i++){
        //Print max element of first window
        cout<<arr[dq.front()]<<" ";

        //Remove any elements which are not of current window
        while((!dq.empty()) && dq.front()<i-k ){
            dq.pop_front();
        }

        //Remove ant useless elements
        while( (!dq.empty()) && arr[i]>arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    //Print max element of the last window
    cout<<arr[dq.front()]<<endl;
}

int main(){
    int a[7] = {1, 3, -1, -3, 5, 3, 6};
    int k = 3;

    findMaxWindow(a, 7, k);
}