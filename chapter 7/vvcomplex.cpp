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

    // Input 3 students
    for(int i = 0; i < 3; i++)
    {
        s[i].input();
    }

    // Write students to binary file
    ofstream file("sp1.dat", ios::binary);

    for(int i = 0; i < 3; i++)
    {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    file.close();

    // Read and search
    ifstream fin("sp1.dat", ios::binary);

    Student temp;
    int searchRoll;

    cout << "Enter roll to search: ";
    cin >> searchRoll;

    bool found = false;

    while(fin.read((char*)&temp, sizeof(temp)))
    {
        if(temp.roll == searchRoll)
        {
            cout << "Student found!" << endl;
            cout << "Roll: " << temp.roll << endl;
            cout << "Marks: " << temp.marks << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Student not found!" << endl;
    }

    fin.close();

    return 0;
}