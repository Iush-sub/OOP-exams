//ok so we have been on a conflict of two datatype addition
//heres the solution we do two T and U and we just add those


#include <iostream>
using namespace std;

template <class T, class U>
void display(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    display(10, 5.5);
    display('A', 20);

    return 0;
} 