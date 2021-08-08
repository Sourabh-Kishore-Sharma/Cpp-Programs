#include "iostream"
#include "map"
using namespace std;

int main(){
    map<string,string> m;

    m["First"] = "Sourabh";
    m["Father"] = "Kishore";
    m["Last"] = "Sharma";

    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;

    m.insert( {"Mother","Namita"} );

    cout<<"Before erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Is mother's name present? "<<m.count("Mother")<<endl;
    cout<<"Is sister's name present? "<<m.count("Sister")<<endl;

    m.erase("Mother");
    cout<<"After erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    cout<<endl;  
}