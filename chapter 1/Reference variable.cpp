// reference variable
// For someone i am iush for someone i am a bad person
// for someone i dont exist and for her i am nobody
// like that reference variable works like a variable with a different name
// why we use to have a effectiveness in code or jus to say we prefer
// to write m instead of marks for calculation

// Reference variable is an alternative name or alias given to 
// ab existing variable.
// using & symbol


#include<iostream>
using namespace std;
int main(){
	int a=10;
	int b=20;
	int &x=a;
	int &y=b;
	cout<<"Before swaping"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	swap(x,y);
	cout<<"after swaping"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
	

}