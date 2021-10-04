/*wap to add nos by taking i/p from user and writing updater
input:5
output:1+2+3+4+5=15
*/
#include<stdio.h>

int Add(int iValue)
{
	int iSum=0;
	int iCnt=0;

	if(iValue<0) //updater
	{
		iValue=-iValue;
	}

	for (int iCnt= 1; iCnt <=iValue; iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iNo=0,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iNo);
    iRet=Add(iNo);
    printf("Addition is:%d\n",iRet);
	return 0;
}

