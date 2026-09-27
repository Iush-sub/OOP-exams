//pure virtual funtion
//this function has no body meaning we will just declare the the fucntion 
//in the base class and defined the function in derived classes
//here the virtual function is empty handed just like i am 
//now the main point the class containing the pure virtual 
//function is called abstract class
//these class only allow interface to the derived class
//these class canot create a object of themself
//and these class may contain numurous normal function but one function 
//is pure then no object for that class

#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void sound()=0;
		
};
class cat:public Animal{
	public:
		void sound()
		{
			cout<<"meow"<<endl;
		}
};
int main()
{
	Animal *a;
	cat c;
	a=&c;
	a->sound();
	return 0;
}