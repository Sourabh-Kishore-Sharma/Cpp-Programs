/*
Program to create a class, create multiple objects,
take input from user, output the same.
*/
#include "iostream"
using namespace std;

class Student{
    //Mention public to access data members outside the class
    //Default is private
    public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

int main(){
    /*
    Below code is equivalent to
    Student a;
    a.name = 
    a.age = 
    a.gender = 
    .
    .
    .
    Student b;
    .
    .
    .
    Student c;
    .
    .
    .
    */
    int n;
    cin>>n;

    Student arr[n];

    for(int i=0; i<n; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }

    for(int i=0; i<n; i++){
        arr[i].printInfo();
        cout<<endl;
    }
}