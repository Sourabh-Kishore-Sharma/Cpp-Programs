/*
An example of a constructor.
Constructor is a code that runs when an object is created.
*/
#include "iostream"
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;

    //Constructor gets invoked when no parameters are passed
    Student(){
        cout<<"Default Constructor."<<endl;
    }

    //Constructor gets invoked when parameters are passed
    Student(string n, int a, bool g){
        name = n;
        age = a;
        gender = g;
    }

    void printInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }
};

int main(){
    Student s1("Sourabh", 21, 0);
    s1.printInfo();

    Student s2;
    return 0;
}