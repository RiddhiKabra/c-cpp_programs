//display marvellous by accepting input from user by declaring function later
#include<stdio.h>
void Display(int);
int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Display(iNo); //function call
	return 0;
}
void Display(int iValue)
{ 

   int i=0;
   for(i=1; i<=iValue;i++)
   {
	printf("Marvellous\n");
   }
 }