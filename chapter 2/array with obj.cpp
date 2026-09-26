// Aray of object
// usually like the structure but it lets you access
//function and dataypes
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int marks;
	void input()
	{
		cout<<"name "<<endl;
		cin>>name;
		cout<<"marks "<<endl;
		cin>>marks;
	}
	void output()
	{
		cout<<name<<endl;
		cout<<marks<<endl;
	}
	
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
	{
		s[i].input();
	}
	for(i=0;i<3;i++)
	{
		s[i].output();
	}
	return 0;
}
