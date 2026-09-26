#include<iostream>
using namespace std;
class Animal{
	public:
		int age;
		string name,species;
		int health=100,hunger=100;
		
		
		
		void feed()
		{
			
		}
		
		void play(){
			
		}
		
		void input()
		{
			cout<<"Type Name: "<<endl;
			cin>>name;
			cout<<"Type Species"<<endl;
			cin>>species;
			cout<<"Type age"<<endl;
			cin>>age;
		}
		void status()
		{
			
			cout<<"Name: "<<name<<endl;
			cout<<"Species: "<<species<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Health"<<health: <<endl;
			cout<<"Hunger"<<hunger: <<endl;
		}
		
};
int main()
{
	int i;
	Animal a[3];
	cout<<"**WELCOME TO THE ZOO SIMULATOR**"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<i+1<<endl;
		a[i].input();
	}
	cout<<"**YOUR ANIMALS**"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<i+1<<endl;
		a[i].status();
	}
	return 0;
}