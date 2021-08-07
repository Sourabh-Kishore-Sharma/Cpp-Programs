#include "iostream"
#include "array"

using namespace std;

int main(){
    array<int,5> a = {1, 20, 300, 4000, 5000};

    for(int i : a){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<a.size()<<endl;
    cout<<"Element at 3rd index : "<<a.at(3)<<endl;
    cout<<"Empty or not : "<<a.empty()<<endl;
    cout<<"Element at front : "<<a.front()<<endl;
    cout<<"Element at end : "<<a.back()<<endl;
}