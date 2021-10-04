//wap to display 1 to 5 nos using for loop by declaring function later
#include<stdio.h>

void Display();//declaration
int main()
{
	Display(); //function call
	return 0;

}
void Display() //definition
{ 
   int i=0;
   for(i=1; i<=5;i++)
	printf("%d\n",i);
}