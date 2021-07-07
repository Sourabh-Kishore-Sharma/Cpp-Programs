/*
Possible to inherit attributes and methods from one class to another.

Derived class (Child) - The class that inherits from another class
Base class (Parent) - The class being inherited from

Syntax - 
    class derived_class :: visibility-mode base_class;
    visibility-modes = {private, protected, public}

Miltilevel Inheritance - When one class inherits from another derived class.
Class C (derived)
    ^
Class B (derived)
    ^
Class A (parent)
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

//Data members & functions of class B inherited to class C as public
class C : public B{
};

int main(){
    C obj;
    obj.funcA();
}