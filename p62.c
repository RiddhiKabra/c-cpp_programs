//problem on N-numbers
#include<stdio.h>

int Add(int Brr[],int iSize)
{
	int iCnt=0, iSum=0;
	for(iCnt=0;iCnt<iSize;iCnt++)	
{
	iSum=iSum+Brr[iCnt];
}
return iSum;
}

int main()
{
int Arr[5];
int iCnt=0,iRet=0;
printf("Enter numbers");
for(iCnt=0;iCnt<5;iCnt++)
{
 scanf("%d",&Arr[iCnt]);
}
iRet=Add(Arr);
printf("Addition is:%d\n",iRet);
return 0;
}
//error