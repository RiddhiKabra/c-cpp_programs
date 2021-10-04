//Accept N nos  and return largest number (negative number updater)


#include<stdio.h>
#include<stdlib.h>
int Maxium(int Arr[], int iLength)
{ 
	int i=0,iMax=Arr[0];
for(i=0;i<iLength;i++)			
{
	if(Arr[i]>iMax) 
	{
		iMax=Arr[i];
	}
 }
 return iMax;
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
iRet = Maxium(p, iSize);
printf(" Largest Number is:%d\n",iRet);
free(p);
return 0;
}
