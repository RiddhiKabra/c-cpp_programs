/*display nos sequentially by accepting input from user by declaring function later
input:7
output: 1 2 3 4 5 6 7
*/
#include<iostream>
using namespace std;

void Display(int iValue)
{ 
   int i=0;
   for(i=1; i<=iValue;i++)
   {
	cout<<"\n"<<i;
   }
 }

 int main()
{
	int iNo=0;
	cout<<"Enter number"<<"\n";
	cin>>iNo;
	Display(iNo); //function call
	return 0;
}