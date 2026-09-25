// constant qualifers
// const is called the constant qualifiers whose function
// is to alocate a variable of certain numeric or char values 
// constant throughout the program 
// previously we used to have define
// now we use const
// define and the concept of text substitution.
// how does the #define pi 3.14 work
// it replaces the text pi in the program with 3.14
// but the const is already a kwyword defined in compiler
// so it is very practical than the define as it provides scope
// and better compiling checking.


#include<iostream>
using namespace std;
int main()
{
	const float pi=3.14; //dont like forget to specify datatype
	float r=3;
	float area=pi*r*r;
	float circumference=2*pi*r;
	cout<<"area is "<<area<<endl;
	cout<<"circumference is "<<circumference<<endl;
	return 0;
	
	
}