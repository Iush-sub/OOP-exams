//Object as a member function
// its like using a object as a member of another
//class or object.
//example is better to these qns
 
 
#include<iostream>
#include<string.h>
using namespace std;
class address{
	public:
		string add;
};
class student{
	public:
		int id;
		address b;
		
		void display()
		{
			cout<<"id no "<<id<<endl;
			cout<<"address "<<b.add<<endl;
		}
};
int main()
{
	address a;
	student s;
	s.b.add="pkr";   //most imp thing here. we have to go sub wise until we
					 //we hit the primitive datatype
	s.id=90;
	s.display();
	return 0;
}