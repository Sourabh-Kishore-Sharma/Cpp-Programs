/*
Operator overloading is defined as the standard operator can be redefined 
so that it has a different meaning when applied to
the instances of a class.

Overloading of == operator.
*/
#include "iostream"
using namespace std;

class Employee{
    public:
        int id;
        string name;
    
        Employee(int i, string n){
            id = i;
            name = n;
        }

        bool operator == (Employee &o) {
            if(o.id==id && o.name==name)
                return true;
            return false;
        }
};

int main(){
    Employee e1(1,"Sourabh");
    Employee e2(1,"Sourabh");
    Employee e3(2,"Vaibhav");

    if( e1==e2 )
        cout<<"Same.";
    else
        cout<<"Not same.";
    cout<<endl;
    
    if( e1==e3 )
        cout<<"Same.";
    else
        cout<<"Not same.";
    cout<<endl;

    return 0;
}