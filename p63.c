//problem on N-numbers
#include<stdio.h>
#include<stdlib.h>


float Avg(int Arr[],int iSize)
{
   int iSum=0,i=0;
   float fResult=0.0f;

   for(i=0;i<iSize;i++)
   {
   	iSum=iSum+Arr[i];
   }
   fResult=(float)iSum/(float)iSize; //explicit typecasting
   return fResult;
}


int main()
{
   int iLength=0,i=0;
   int*ptr=NULL;
   float fRet=0.0f;

   printf("Enter number of elements\n");
   scanf("%d",&iLength);

     ptr=(int*)malloc(sizeof(int)*iLength);

     printf("Enter elements\n");
     for(i=0;i<iLength;i++) //used to take data from user
    {
    	scanf("%d",&ptr[i]);
    }

    printf("Entered data is:\n") ;
    for(i=0;i<iLength;i++) //used to display data
    {
    	printf("%d\n",ptr[i]);
    }

    fRet=Avg(ptr,iLength);
    printf("Average is:%.2f\n",fRet);
	//printf("Average is:%f\n",fRet);
    
    free(ptr);

	return 0;

}