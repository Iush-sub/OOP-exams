//Inline function outside the class
//so we know the scope resolution tecnique to like 
//call sth using ::. this topic is more focused on 
//calling a function outside and has to be specifically 
//inline

#include<iostream>
using namespace std;
class student{
	public:
		int ma;
		
		inline void square();
};

inline void student::square()
{
	cout<<ma*ma<<endl;
}
int main()
{
	student s;
	s.ma=9;
	s.square();
	return 0;
}