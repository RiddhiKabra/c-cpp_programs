//wap to display 5 to 1 nos accepting input from user

#include<stdio.h>

void Display(int iValue)
{
	int i=0;
	if(iValue==0)
	{
		printf("You entered 0\n");
	}
 
    if(iValue<0) 
    {
    	iValue=-iValue; //updater
    }

	for ( i=iValue; i>=1; i--)
	{
		printf("%d\n",i);
	}
} 

int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);

	Display(iNo);
	return 0;
}

