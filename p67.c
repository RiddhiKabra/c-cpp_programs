//If number is greater than 10  & less  than 20 return it


#include<stdio.h>
#include<stdlib.h>
int CountRange(int Arr[], int iLength)
{ 
	int iCnt=0,i=0;
for(iCnt=0;iCnt<iLength;iCnt++)			
{
	if((Arr[i]>10 )&& (Arr[i]<20))  
	{
		i++;
	}
 }
 return i;
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
iRet = CountRange(p, iSize);
printf(" Count is:%d\n",iRet);
free(p);
return 0;
}