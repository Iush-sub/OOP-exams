#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int age=12,marks=12;
	string name="Iush";
	ofstream fout("student.txt");
	fout<<name<<" ";
	fout<<age<<" ";
	fout<<marks<<" ";
	fout.close();
	ifstream fin("student.txt");
	fin>>name;
	cout<<"name: "<<name<<endl;
	fin>>age;
	cout<<"age: "<<age<<endl;
	fin>>marks;
	cout<<"marks: "<<marks<<endl;
	fin.close();
	return 0;
}