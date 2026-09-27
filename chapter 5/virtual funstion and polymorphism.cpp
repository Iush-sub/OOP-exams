//polymorphism
//it means many form
//A function might be different for one class and
//different for other
//so normally we woulld overload but there comes a virtual function which works in 
//runtime rather than compli time like function overload
//normally we might be unfimilar with the derived class we will be working
//thus we cant actually be that certain which funtion to give to the base class that will
//benifit the derived class. what we do is we just create a virtual function
//now when we know the object we will just like use it when we need in main after the function is createed
//virtual function will be checked during the run time and as a matter of fact it is slow but\
//more flexible than we think
//if we got more than one class and a same function
//we no need to change it manually as we have a virtual class in the
//base which will be pointed to the given option we choose.


#include<iostream>
using namespace std;
class Animal{
	public:

		virtual void sound()
		{
			cout<<"sound of animal"<<endl;
		}
};
class cat:public Animal{
	public:
		void sound(){
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