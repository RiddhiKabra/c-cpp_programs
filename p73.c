 // Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO by traversing loop from starting


#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
   int i=0,index=-1;

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] == iNo)
        {  
         index=i;
      }
    }
        return  index;
}
int main()
{
int iSize = 0,iCnt = 0,iValue=0,iRet=0;
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
printf("Enter element %d:\n",iCnt+1);
scanf("%d",&p[iCnt]);
}
printf("Enter the number to search\n");
scanf("%d",&iValue);
iRet = LastOcc(p, iSize,iValue);
if(iRet == -1)
{
printf("There is no such number");
}
else
{
printf("First occurrence of number is  at index: %d",iRet);
}
free(p);
return 0;
}
