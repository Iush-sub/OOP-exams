//RTTI
//so there is two types of 
//object type in virtual function 
//the pointer pointing to the base and the derived class object
//or the actual object
//lets imagine like ths
//lets say we got two base class one says animal other says 
//plants so to make sure the derived class obj calls the base class animal
//rtti is useful
//it is of tow type


#include<iostream>
using namespace std;
class Animal{
	public:
		virtual void sound()=0;

};
class dog:public Animal{
	public:
		void sound()
		{
			cout<<"worff wroff"<<endl;
		
		}
};
int main()
{
	Animal *a;
	dog d;
	a=&d;
	dog *p=dynamic_cast<dog*>(a);
	
	if (p != nullptr)
    	cout << "It is a Dog";
	a->sound();
	return 0;
}


//dynamic castying we have a pointer of dog
//the pointer will point to the class of the
//its kind of like exception handling if we are working in big projects
