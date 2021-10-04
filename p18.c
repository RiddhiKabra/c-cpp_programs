//wap to check whether number is even or odd
#include <stdio.h> //for printf and scanf
#include<stdbool.h>//for bool datatype

bool CheckEven(int iValue)
{
	if(iValue%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo=0;
	bool bRet=false; //bool bRet=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	bRet= CheckEven(iNo);

	if(bRet==true)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
	return 0;
}