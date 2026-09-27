//Need of virtual Base class
//Normally when we create a class no matter what we can create a object out of it
//suppose we have a base class which stores the bank account and if we 
//create a object of the base class we can surely have edited the banck account
//the point here is that base class will have an object which the program is not designed for
//we cant really have the base object rather we have a common baase with no object
//hence came the virtual base class concept
//or there is another issue
//its like when there are two parent class of same base and both parent class have a 
//child class then the child will inherit two base class from both of the parents 
//which will create an ambiguity
//so we have virtual base concept
//the above is a property lol like we cant create an object of virtual class
//also the virtual is defined when we create a derive class not at the begining



//A virtual class ensures that only one copy of th commom base class
//exist when multiple inheritance creates a diamond

#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;

    cout << obj.x;   

    cout << obj.B::x << endl;
    cout << obj.C::x << endl;

    return 0;
}

