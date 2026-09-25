//function
// A function is defined as a self contained block of code which
//performs a particular task or job.
//got a note so nth in particular
//function overloading:creating multiple fuctions with same name
//different parameters
//during function overloading the default argument must match 
//while calling the function
//when overloading, c++ prefers the perfect match
// first it searches for the exact function and arguments
// then it searches function with exact argument but convertable
//datatype. if there are more than two best function there calls an ambuguity 

#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}
int add(int a, int b, int c)
{
	return a+b+c;
}
double add(double a, double b)
{
	return a+b;
}


int main()
{
	cout<<add(2,3)<<endl;
	cout<<add(4,5,6)<<endl;
	cout<<add(3.2,9.89)<<endl;
	return 0;
}