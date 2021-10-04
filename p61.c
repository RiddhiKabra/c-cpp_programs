//problem on N-numbers
#include<stdio.h>
#include<stdlib.h>

int Addition(int*Brr,int iSize)
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
int*Arr=NULL;
int iCnt=0,iRet=0,iLength=0;

printf("Enter no. of elements");
scanf("%d",&iLength);

Arr=(int *)malloc(sizeof(int)*iLength);

printf("Enter numbers");
for(iCnt=0;iCnt<iLength;iCnt++)
{
 scanf("%d",&Arr[iCnt]);
}
iRet=Addition(Arr,iLength);
printf("Addition is:%d\n",iRet);

free(Arr);
return 0;
}