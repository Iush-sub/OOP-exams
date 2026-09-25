//inline function
//for some function which has to be called repetely then we 
//so to overcome such situation we do request to our compiler
//inline fucntion mainly request compiler to replace the block of command
//ie function with the calling part
// but in modern c++ this is not a issue so we can jus let it be

#include<iostream>
using namespace std;

inline int square(int a)
{
	return a*a;
}

int main()
{
	cout<<square(9)<<endl;
	return 0;
}