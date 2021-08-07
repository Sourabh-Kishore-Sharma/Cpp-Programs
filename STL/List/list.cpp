#include "iostream"
#include "list"
using namespace std;

int main(){
    list<int> l;

    l.push_front(5);
    l.push_back(4);
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();
    l.pop_front();

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.remove(4);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
}