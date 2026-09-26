//addition of complex number
//we need to add the real part and imiginary part

#include<iostream>
using namespace std;
class complex{
	public:
		int real;
		int imaginary;
		
	complex(int a,int b) //note we can have the overloading function concept
	//for constructors as well cause its important.
	{
		real=a;
		imaginary=b;
	}
	
	complex operator+(complex c)
	{
		complex temp(0,0);
		temp.real=real+c.real;
		temp.imaginary=imaginary+c.imaginary;
		
		return (temp);
	}
};

int main()
{
	complex c1(3,4), c2(9,0), c3(0,0);
	c3=c1+c2;
	cout<<c3.real<<endl;
	cout<<c3.imaginary<<endl;
	return 0;
}