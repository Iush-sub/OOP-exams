#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10, b = 20;

    swapValues(a, b);

    cout << a << " " << b;

    return 0;
}