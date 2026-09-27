#include<iostream>
using namespace std;
template<class T>
class box{
	public:
		T value;
		
		Box(T v)
		{
			value=T;
		}
		
		void display()
		{
			cout<<value<<endl;
		}
};
int main()
{
	box a(9),b(7.8);
	cout<<a.value<<endl;
	cout<<b.value<<endl;
	return 0;
}