//Constructors and Destructors
//now what is constructors
//we define a function in name of the class
//then whenever we create a object 
//the function will get executed first
//the fucntion gets the priority which i didn't get
//destructors are opposite of the constructors
//they execute at last destroying the object
//jus like she distroying mai heart
//ths is the basic and in exam we will get qn bassed on the
//working and timing
//mabe we get the inheritance one


#include<iostream>
using namespace std;
class test{
	public:
		test()
		{
			cout<<"constructor created"<<endl;
		}
		~test()
		{
			cout<<"destructor created"<<endl;
		}
};
int main()
{
	test t;
	return 0;
}