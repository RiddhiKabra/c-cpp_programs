//wap to display number in reverse nos accepting input from user

#include<iostream>
using namespace std;
void Display(int iValue)
{
	int i=0;
	
	for (i=iValue; i>=1; i--)
	{
		cout<<"\n"<<i;
	}
} 

int main()
{
	int iNo=0;

	cout<<"Enter number"<<"\n";
   cin>>iNo;

	Display(iNo);
	return 0;
}