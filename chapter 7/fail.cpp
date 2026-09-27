#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    int roll;
    int marks;

    void input()
    {
        cout << "Enter roll: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;
    }
};

int main()
{
    Student s[3];

    
    for(int i = 0; i < 3; i++)
    {
        s[i].input();
    }


    ofstream file("sp2.dat", ios::binary);

    for(int i = 0; i < 3; i++)
    {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    file.close();
    
    Student temp;
    int roole,marks;
    cout<<"Enter the std roll whoose marks is to be changed: ";
    cin>>rolle;
    cout<<"marks: ";
    cin>>marku;
    
    fstream file("sp2.dat",ios::binary);
    while(file((char*)&temp,sizeof(temp)))
    {
    	if(temp.roll==rolle)
    	{
    		temp.marks=marku;
    		break;
		}
	}
	file.close();
	return 0;
}