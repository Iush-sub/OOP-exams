//inheritance
//its like the literal meaning
//we got main class and we derive a base class
//and we did inheritance
//simple and easy not like her attitude
//normally when we do inheritance we use : sign and the syntax is below
//in the example
//also we have done the overriding part....
//we will get complex question in case of inheritance.
#include<iostream>
using namespace std;
class chef{
	public:
		void display()
		{
			cout<<"food"<<endl;
		
		}
};
class italian_chef:public chef{
	public:
		void display(){
		cout<<"pizza"<<endl;
		}
};
int main()
{
	chef c;
	c.display();
	italian_chef i;
	i.display();
	return 0;
}