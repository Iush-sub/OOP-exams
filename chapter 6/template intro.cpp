//Template:
//so normally a class is defined for a specific datatype?
//oho its taking about the constructor in a broad sense
//first we see the template function
//see i create a function to compare the integer datatype
//then lets say i wanted to compare the float 
//then i say i wanted to compare the char and theri ascii value
//we get infinite possibility so what template dose it creates a blueprit 
//so any other datatype can thrive in the same logic with no restriction 

#include<iostream>
using namespace std;
template <class T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<add(12,9)<<endl;
	cout<<add(78.3,7.009); //also no cross datatype is allowed for some reason.
	cout<<add(3,7);
	return 0;
}