#include<iostream>
#include<fstream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		int marks;
		
	student(int a,string b,int c)
	{
		name=b;
		roll=a;
		marks=c;
	}
};
int main()
{
	student s(12,"iush",45);
	ofstream fout("student.dat",ios::binary);
	fout.write((char*)&s,sizeof(s));
	fout.close();
	ifstream fin("student.dat",ios::binary);
	fin.read((char*)&s,sizeof(s));
	cout<<s.roll<<endl;
	cout<<s.name<<endl;
	cout<<s.marks<<endl;
	fin.close();
	return 0;
}