/*
Reduce the given array - Change the values from 0 to n-1.

make_pair() is quivalent to - 
pair<int,int> p;
p.first = a[i];
p.second = i;
*/
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

bool myCompare(pair <int,int> p1, pair <int,int> p2){
    //Return pair whose first is less
    return p1.first<p2.first;
}

int main(){
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector < pair<int,int> > v;

    //Traverse through array
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        //Make pair for every element with its index
        //Store the pair into the vector
        v.push_back(make_pair(arr[i],i));
    }

    //Sort the vector
    sort(v.begin(),v.end(), myCompare);

    //Modify the original array
    for (int i = 0; i < v.size(); i++){
        arr[v[i].second] = i;
    }

    //Print array
    for (int i = 0; i < v.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;   
}