/*display nos sequentially by accepting input from user by declaring function later
input:7
output: 1 2 3 4 5 6 7
*/

#include<stdio.h>
////////////////////////////////////////////////////////////////(header.h)
void Display(int iValue) //signed int(+,-)
{ 
   int i=0;

   if(iValue==0) //Filter
   {
	   printf("You entered 0\n");
   return;
   }
   if(iValue<0) //Input updater
   {
   	iValue=-iValue;
   }


   for(i=1; i<=iValue;i++)
   {
	printf("%d\n",i);
   }
 }
////////////////////////////////////////////////////////////////////////////////(helper.c)
 int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Display(iNo); //function call
	return 0;
}
////////////////////////////////////////////////////////////////////////////////(main.c)