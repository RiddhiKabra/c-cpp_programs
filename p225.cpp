//generic programming
#include<iostream>
using namespace std;

//Specific function
void Swap(char*p,char*q)
{
	char temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

//generic function
template<class T>
void SwapX(T*p,T*q)
{
	T temp;

	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	char x='A',y='B';
	SwapX(&x,&y);
	cout<<"Value of X after being swapped:"<<x<<"\n";
	cout<<"Value of Y after being swapped:"<<y<<"\n";

	int i=1,j=2;
    SwapX(&i,&j);
	cout<<"Value of I after being swapped:"<<i<<"\n";
	cout<<"Value of J after being swapped:"<<j<<"\n";
	return 0;
}