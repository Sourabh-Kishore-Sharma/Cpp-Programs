/*
An example of operator-overloading.

We can overload operators( == , + , - ,etc), to work on class objects.
Here, we compare two objects of the Student class.
*/
#include "iostream"
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool gender;

    //Constructor gets invoked when parameters are passed
    Student(string n, int a, bool g){
        cout<<"Inside parameterised constructor"<<endl;
        name = n;
        age = a;
        gender = g;
    }

    void printInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }

    //Deep Copy
    Student (Student &s){
        cout<<"Inside copy-constructor"<<endl;
        name = s.name;
        age = s.age;
        gender = s.gender;
    }

    //Operator-overloading
    bool operator == (Student &s){
        if( name==s.name && age==s.age && gender==s.gender)
            return true;
        return false;
    }


};

int main(){
    Student s1("Sourabh", 21, 0);

    //Copy - constructor
    Student s2(s1);

    if(s1==s2)
        cout<<"Both objects are same."<<endl;
    else
        cout<<"Both objects are different."<<endl;

    return 0;
}