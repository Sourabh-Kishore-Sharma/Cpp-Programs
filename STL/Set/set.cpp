#include "iostream"
#include "set"
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(0);
    s.insert(6);
    s.insert(7);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    //now it points to second element
    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"3 is present or not : "<<s.count(3)<<endl;
    cout<<"9 is present or not : "<<s.count(9)<<endl;

    set<int>::iterator itr = s.find(5);
    itr++;
    
    cout<<"Elements after 5 are : ";
    for(auto i = itr; i!=s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}