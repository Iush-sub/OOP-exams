#include<iostream>
using namespace std;
class Crickter{
	public:
		int Games;
		string Name;
};
class bowler: public Crickter{
	public:
		int Wickets;
	
	void display()
	{
		cout<<"Games played: ";
		cout<<Games<<endl;
		cout<<"Wickets: ";
		cout<<Wickets<<endl;
		cout<<"Name: ";
		cout<<Name<<endl;
	}
		
};

int main()
{
	bowler b;
	b.Games=45;
	b.Name="Iush";
	b.Wickets=45;
	b.display();
	return 0;
}
