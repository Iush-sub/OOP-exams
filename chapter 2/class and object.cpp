//now we are in the deep water of oop
//deep like my love for her
//the origin of oop is the concept of program circling
//around the data and objects
//now for an object we need a class a blue print
//class is a blueprint/template for creating objects
//object is a real world entity which follows the 
//blueprint of class and all
//class insures every foundations of oop like
//inheritance incapsulation and polymorphism.
//now class also insures the security of datatype
//so class is the main thing we will be learning and 
// it will be the founding blocks for every projects 
//from now on


#include<iostream>
#include<string.h>
using namespace std;
class student{
	public:
		int roll;
		string name;
	
	void roll_no(int a)
	{
		roll=a;
	}
	void names(string a)
	{
		name=a;
	}
};
int main()
{
	student s;
	s.roll_no(34);
	s.names("iush");
	cout<<s.roll<<endl;
	cout<<s.name;
	return 0;
}