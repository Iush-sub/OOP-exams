#include<iostream>
using namespace std;
int main()
{
	int a; // always declare any variable first
	cout<<"type a number"; // << is the insertion operator while cout is the 
	//stream class defined in iostream which represents screen by default. 
	cin>> a; //>> is the extraction operator while cin is the 
	// cin takes input from the keyboard 
	cout<<"your number is"<<a;
	return 0;
}