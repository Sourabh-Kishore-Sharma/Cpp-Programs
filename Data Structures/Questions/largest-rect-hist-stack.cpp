/*
Largest rectangle in a hostogram using stack.

Given an array, each element represents the height of the histogram's bar
and the width of each bar is 1, find the area of largest rectangle in the
histogram.
*/
#include "iostream"
#include "stack"
using namespace std;

int maxRect(int hist[], int n){
    stack<int> st;

    int left[n], right[n];

    //Find left limit
    //i.e Find nearest left bar with height < current height
    for(int i=0; i<n; i++){
        if(st.empty()){
            left[i] = 0;
            st.push(i);
        }
        else{
            while(!st.empty() && hist[st.top()]>=hist[i]){
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top()+1;
            st.push(i);
        }
    }

    //clear stack
    while(!st.empty()){
        st.pop();
    }

    //Find right limit
    //i.e Find nearest right bar with height < current height
    for(int i=n-1; i>=0; i--){
        if(st.empty()){
            right[i] = n-1;
            st.push(i);
        }
        else{
            while(!st.empty() && hist[st.top()]>=hist[i]){
                st.pop();
            }
            right[i] = st.empty() ? n-1 : st.top()-1;
            st.push(i);
        }
    }

    //Calculate area of each bar and store max area
    int maxi = 0;
    for(int i=0; i<n; i++){
        int area = (right[i]-left[i]+1)*hist[i];
        maxi = max(area, maxi);
    }
    return maxi;
}

int main(){
    int hist[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(hist)/sizeof(hist[0]);

    cout<<maxRect(hist, n)<<endl;
}