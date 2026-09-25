//Pointer
//pointer is a variable that contains a memory address
//of another variable
//in c we can alter sth directly by the memory address
//which is very helpfull rather then calling that varaible
//now we know the refrence
//i am iush for others i am nobody to her and probably
//invisible to many. but i am me
// refrence is the concept when we have a different
//name for the same person
//in refrence we do sth like int &a=marks
//in pointer we do opposite ie int *p=&a
//pointer p is pointing to the memory of the a variable
//& is refrence operator
// also pouring water in bottle and bottle in water is different




#include<iostream>
using namespace std;
int main()
{
	int a=100;
	int *p=&a;
	cout<<a<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	*p=500;
	cout<<a<<endl;
	return 0;
	
}