#include "iostream"
#include "deque"

using namespace std;

int main(){
    deque<int> d;

    d.push_front(5);
    d.push_back(4);
    d.push_back(3);
    d.push_back(2);
    d.push_back(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<d.size()<<endl;
    cout<<"Max size : "<<d.max_size()<<endl;
    d.erase(d.begin(), d.begin()+1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size : "<<d.size()<<endl;
    cout<<"Max size : "<<d.max_size()<<endl;

    cout<<"Element at 2nd index : "<<d.at(2)<<endl;
    cout<<"Element at front : "<<d.front()<<endl;
    cout<<"Element at back : "<<d.back()<<endl;
}