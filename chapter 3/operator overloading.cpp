//Operator Overloading
//lets dive into a example
//we have a class distance with data type feet and inch
//now i create two object d1 and d2 with different value of feet and inch
// and i tried to add them
// is this legeal. absoutly no.
//C++ doesnt allows us to directly add the given object
//so what we do. we create an operator function which 
//can add our two object
//The use of of an operator for different purpose in different 
//data type is called operator overloading.
//in operators we got unary and binary which is useful


#include<iostream>
using namespace std;
class objs{
	public:
		int real;
		int imaginary;
		
	objs(){
		real=0;
		imaginary=0;
	}
	
	void operator-()
	{
		real=-real;
		imaginary=-imaginary;
	}
	void display()
	{
		cout<<real<<endl;
		cout<<imaginary<<endl;
	}
};
int main(){
	objs a;
	a.real=3;
	a.imaginary=9;
	a.operator-();
	a.display();
	return 0; 
}