//Sum of N odd nos


#include<stdio.h>
#include<stdlib.h>
int SumOdd(int Arr[], int iLength)
{ 
	int iCnt=0,iSum=0;
for(iCnt=0;iCnt<iLength;iCnt++)			
{
	if(Arr[iCnt]%2==1)
	{
		iSum=iSum+Arr[iCnt];
	}
 }
 return iSum;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements\n");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
printf("Enter elements %d\n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element %d:",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = SumOdd(p, iSize);
printf("Sum of odd elements is: %d",iRet);
free(p);
return 0;
}