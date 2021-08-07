#include "iostream"
#include "vector"
using namespace std;

int main(){
    vector<int> v1;

    //To append elements
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    //10 20 30

    //Printing vector
    //Method 1 - Using for
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //Method 2 - Using iterator (a pointer)
    vector<int>::iterator it;
    for(it=v1.begin(); it!=v1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //Method 3 - auto keyword
    for(auto element:v1){
        cout<<element<<" ";
    }
    cout<<endl;


    v1.pop_back(); //10 20

    vector<int> v2 (3, 100);
    //100 100 100
}