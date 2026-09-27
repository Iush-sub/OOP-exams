//now the typeid().name function which just
//tells the datatype of the pointer

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
	a->sound();
	cout<<typeid(*a).name(); //we get number of alphabet+name of object
	return 0;
}
