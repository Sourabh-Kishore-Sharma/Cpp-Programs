/*
Example of getter & setter methods.

Getters - Public functions used to get private data members in the class.
Setter - Public functions used to set private data members in the class. 
*/
#include "iostream"
using namespace std;

class Student{
    //Mention public to access data members outside the class
    //Default is private
    //Data members above public: remains private
    string mail;
    public:
    string name;
    int age;
    bool gender;

    string getMail(){
        return mail;
    }

    void setMail(string str){
        mail = str;
    }

    void printInfo(){
        cout<<name<<", ";
        cout<<age<<", ";
        cout<<gender<<endl;
    }
};

int main(){
    int n;
    cin>>n;

    Student arr[n];
    string mail;

    for(int i=0; i<n; i++){
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;

        cout<<"Enter mail: ";
        cin>>mail;
        arr[i].setMail(mail);
    }

    for(int i=0; i<n; i++){
        arr[i].printInfo();
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i].getMail();
        cout<<endl;
    }
}