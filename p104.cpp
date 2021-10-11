//Display marvellous by accepting input from user by declaring function later
#include<iostream>
using namespace std;
void Display(int);
int main()
{
	int iNo=0;
	cout<<"Enter number:"<<"\n";
	cin>>iNo;
	Display(iNo); //function call
	return 0;
}
void Display(int iValue)
{ 

   int i=0;
   for(i=1; i<=iValue;i++)
   {
	cout<<"Marvellous"<<"\n";
   }
 }