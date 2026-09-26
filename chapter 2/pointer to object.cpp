//Pointer with object




#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student s;
    s.marks = 90;

    Student *p = &s;   // pointer to object

    cout << p->marks << endl;
    p->display();

    return 0;
}