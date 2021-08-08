#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

int main(){
    vector<int> v = {10, 30, 50, 80, 65, 90};

    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Sort Function
    sort(v.begin(), v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //Binary search
    cout<<"Finding 10 using binary search : "<<binary_search(v.begin(), v.end(), 10)<<endl;
    cout<<"Finding 7 using binary search : "<<binary_search(v.begin(), v.end(), 7)<<endl;

    //Maximum
    int a=10, b=30, c=25;
    cout<<"Max of a, b & c is : "<<max(a, max(b,c))<<endl;

    //Lower and upper bound
    vector<int>::iterator low, up;
    low = lower_bound(v.begin(), v.end(), 80);
    up = upper_bound(v.begin(), v.end(), 80);

    cout<<"Lower bound of 80 is : "<<low-v.begin()<<endl;
    cout<<"Upper bound of 80 is : "<<up-v.begin()<<endl;

    //Reverse
    string s = "sourabh";
    reverse(s.begin(), s.end());
    cout<<"String after reverse "<<s<<endl;

}