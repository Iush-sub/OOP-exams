//Object as function argument
//object is a data type in a sense
//we can pass object ot different objects function 
//as an argument
//or objrct can be passed to outside function


#include<iostream>
using namespace std;
class student {
	public:
		int marks;
		
};
void marks(student s)
{
	cout<<"the marks is "<<s.marks;
}
int main()
{
	student s;
	s.marks=46;
	marks(s);
	return 0;
}