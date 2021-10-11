
//display marvellous by accepting input from user
#include<iostream>
using namespace std;
void Display(int iValue)
{ 

   int i=0;
   for(i=1; i<=iValue;i++)
   {
	cout<<"Marvellous"<<"\n";
   } 
}

int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Display(iNo); //function call
	return 0;
}
