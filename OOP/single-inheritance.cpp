/*
Possible to inherit attributes and methods from one class to another.

Derived class (Child) - The class that inherits from another class
Base class (Parent) - The class being inherited from

Syntax - 
    class derived_class :: visibility-mode base_class;
    visibility-modes = {private, protected, public}

Single Inheritance - When one class inherits another class.
*/
#include "iostream"
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"Function of class A."<<endl;
    }
};

//Data members & functions of class A inherited to class B as public
class B : public A{
};

int main(){
    B obj;
    obj.funcA();
}
