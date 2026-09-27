#include<iostream>
#include<fstream>
using namespace std;
class student{
	public:
		int roll;
		string name;
		float marks;
		
		student()
		{
			name="";
			marks=0;
			roll=0;
		}
		
		void input()
		{
			cout<<"Name: ";
			cin>>name;
			cout<<"Roll no: ";
			cin>>roll;
			cout<<"Marks: ";
			cin>>marks;
		}
		
};
int main()
{
	student s[3];
	int i;
	for(i=0;i<3;i++)
	{
		s[i].input();
	}
	ofstream fout("student.dat",ios::binary);
	for(i=0;i<3;i++)
	{
		fout.write((char*)&s[i],sizeof(s[i]));
	}
	fout.close();
	ifstream fin("student.dat",ios::binary);
	for(i=0;i<3;i++)
	{
		fin.read((char*)&s[i],sizeof(s[i]));
		cout << s[i].roll << endl;
    	cout << s[i].name << endl;
    	cout << s[i].marks << endl;
		
		
	}
	fin.close();
	return 0;
	
}