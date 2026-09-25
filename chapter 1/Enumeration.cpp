//string array structure unions same as c nth to add ig
// Enumeration 
//think enumeration as a list in numbered pattern
//defination goes like "Enumeration is a user defined data type that gives meaningful names to ser
//of integer values"
// a priority list (where i used to be last in hers)
//so if we create a list it has a default numbering
//starting from 0
//now suppose we have a list of people 
//now if i were to find a person name it will be not practical
// we talking about numbers of people
// so to tackle such problem we use enum
//example will illustrate it better


#include<iostream>
using namespace std;
int main(){
	enum color{
		green,
		red,
		blue,
		orange
	};
	color c=green;
	cout<<"faviorute color is"<<c<<endl;
	return 0;
}