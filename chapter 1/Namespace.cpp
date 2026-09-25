// condition and looping same as in c
// now the new thing is namspace std
// Namespace scope is the region in which names declared
//inside a namespace are visible(accessible) and are accessed
//using scope resolution operator ::
// normally if we define a variable inside main() its local scope
// if we define variable inside class its class scope
// if we define variable inside namespace its namespace variable
// if we define variable outside everything its global scope aka we
// get global variable
// namespace helps us to avoid name conflits in the program
// were we use the same variable
// note the std is a namespace with cout cin function
// so namespace is important 
// big programers dont use the namespace std directly to avoid ambiguity

#include<iostream>
using namespace std;
namespace student {
	int marks=95;
}
namespace teacher {
	int marks=100;
}
int main()
{
	cout<<"teacher: "<< teacher::marks<<endl;
	cout<<"student: "<< student::marks<<endl;
	return 0;
}