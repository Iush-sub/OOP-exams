#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a;
	ofstream file("integer.txt");
	for(int i = 0; i < 5; i++)
	{
		cout<<"integer no "<<i+1<<": ";
    	cin >> a;
    	file << a << endl;
	}
	file.close();
	
	ifstream fin("integer.txt");
	while(fin >> a)
	{
		cout<<a<<endl;
	}
	fin.close();
	return 0;

}