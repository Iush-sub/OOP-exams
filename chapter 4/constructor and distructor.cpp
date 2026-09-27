//Is a relation and has a relation is the very particular concept
//is a relation gives the concept of inheritance while
//has a relation gives the concept of using the object of a class
//as a member of another class
//moving on we got construction and destructors
//the base class constructor gets executed and derived class
//constructor is executed when we create an object of the derived class.
//similarly the derived class destructor is executed first than the base class
//constructor
//this is the pure fundamental concept which will be very handy in the future


#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "base constructor" << endl;
    }

    ~Base() {
        cout << "base destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor" << endl;
    }

    ~Derived() {
        cout << "Derived destructor" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}
