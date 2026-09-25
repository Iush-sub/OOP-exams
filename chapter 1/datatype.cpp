// Data types
// basic int float double char and string when we declare string.h
// derived array, string
// userdefined which we define
// there is ths function sizeof() to know the size of the given variable object or class
#include<iostream>
using namespace std;
int main()
{
	int a=4;
	float b=3.09;
	double e=9.92929; // has 8bytes than float of 4bytes.
	char c ='a';
	bool d =true;
	
	cout<<a<<endl;
	cout<<sizeof(a)<<endl;
	
	cout<<b<<endl;
	cout<<sizeof(b)<<endl;
	
	cout<<c<<endl;
	cout<<sizeof(c)<<endl;
	
	cout<<d<<endl;
	cout<<sizeof(d)<<endl;
	
	cout<<e<<endl;
	cout<<sizeof(e)<<endl;
	
	return 0;
}