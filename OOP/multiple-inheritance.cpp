/*
Possible to inherit attributes and methods from one class to another.

Derived class (Child) - The class that inherits from another class
Base class (Parent) - The class being inherited from

Syntax - 
    class derived_class :: visibility-mode base_class;
    visibility-modes = {private, protected, public}

Multiple Inheritance - When one class inherits from two or more classes.
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
    public:
    void funcB(){
        cout<<"Function of class B."<<endl;
    }
};

//Data members & functions of class A & B inherited to class C as public
class C : public A, public B{
};

int main(){
    C obj;
    obj.funcB();
    obj.B::funcA();
}