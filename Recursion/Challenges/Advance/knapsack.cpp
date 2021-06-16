/*
Put n items with given weight & value in a knapsack
of capacity W to get the minimum total value in the knapsack.
*/
#include "iostream"
using namespace std;

int knapsack(int value[], int weight[], int n, int W){
    //Stop when n=0 or weight=0
    if(n==0 || W==0)
        return 0;
    
    //Not include item if weight exceeds W
    if(weight[n-1]>W)
        return knapsack(value, weight, n-1, W);

    //Two calls respectively for including/excluding an item
    return max(knapsack(value, weight, n-1, W-weight[n-1])+value[n-1]
                ,knapsack(value, weight, n-1, W));
}

int main(){
    int n;
    cin>>n;

    int value[n];
    int weight[n];

    //Input value of the item
    for(int i=0; i<n; i++)
        cin>>value[i];
    
    //Input weight of the item
    for(int i=0; i<n; i++)
        cin>>weight[i];

    //Input weight of the knapsack
    int W;
    cin>>W;

    cout<<knapsack(value, weight, n, W)<<endl;

    return 0;
}