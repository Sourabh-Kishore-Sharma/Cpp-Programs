/*
An example of a destructor.
Invoked when the object goes out of scope or is explicitly destroyed by a call to
delete.
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
        name = n;
        age = a;
        gender = g;
    }

    void printInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
    }

    //Destructor - No parameters/no return type
    //Called when we get out of the main function
    ~Student(){
        cout<<"Destructor Called."<<endl;
    }
};

int main(){
    Student s1("Sourabh", 21, 0);
    s1.printInfo();
    
    return 0;
}