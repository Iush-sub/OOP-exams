//now there is this concept of public private and protected datatype
//now the baase class private members are never to be inherited;
//the protected is to be inherited and can only be modified by 
//the functions of derived class
//public is means we can inherite and can be modified by the derived class
//and be also be modified by the outside function 

#include<iostream>
using namespace std;
class marks{
	private:
		int marks;
		
	public:
		void takemarks()
		{
			cout<<"type your marks: ";
			cin>>marks;
		}
		void displaymarks()
		{
			cout<<"Your marks: "<<marks<<endl;
		}
};
class student:public marks{
	public:
		string name;
		
		void takename()
		{
			cout<<"Enter your Name: "<<endl;
			cin>>name;
		}
		
		void displayname()
		{
			cout<<"Your Name: "<<name<<endl;
		}
};
int main()
{
	student s;
	s.takename();
	s.takemarks();
	s.displayname();
	s.displaymarks();
	return 0;
}