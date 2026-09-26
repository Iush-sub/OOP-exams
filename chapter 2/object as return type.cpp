//we rarely use ths return type for object
//we can return int float etc. and also object
//so we create a object return type in a function.

#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

Student display()
{
    Student s;
    s.marks = 90;
    return s;
}

int main()
{
    Student s1;

    s1 = display();

    cout << s1.marks;

    return 0;
}