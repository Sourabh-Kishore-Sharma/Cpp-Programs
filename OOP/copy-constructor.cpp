/*
An example of a copy - constructor.

Copy-constructor : To copy the class objects.
i) Shallow Copy (Default)
    The object and its copy, point to the same memory address. If you make a change
    in its copy it gets changed in the main copy as well and vice versa.

    Data members gets copied but not the memory they are pointing to.


ii) Deep Copy
    The object and its copy, point to different addresses in the memory. If you make a
      change in its copy it will not get changed in the main copy and vice versa.
    
    Data members and memory they are pointing to gets copied.

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

};

int main(){
    Student s1("Sourabh", 21, 0);

    //Copy - constructor
    Student s2(s1);
    //Student s2 = s1;
    s2.printInfo();
    return 0;
}