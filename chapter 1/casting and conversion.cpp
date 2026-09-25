
// data type conversion is the process of converting a
// value from one data type to another data type.
// it happens automatically or manually
// this is called implicit conversion



// type casting is the explicit conversion of a value
// from one datatype to another by the programmer.
// we espically tell the program to change it into 
// another datatype.
// thi is explicit conversion










#include<iostream>
using namespace std;

int main()
{
	int a=4;
	int b=3;
	float c = (float)a/b;
	float d=a/b;
	cout<< c<<" with type casting"<<endl;
	cout<< d <<" without type casting"<<endl;
	return 0;
}