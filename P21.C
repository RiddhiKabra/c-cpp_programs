//wap to display factors of a number
#include <stdio.h> 

void DisplayFactors(int iValue)//hungarian notation (D)isplay(F)actors
{
	int iCnt=0;
	if (iValue<0)
	{
		iValue =- iValue;
	}
	
	
	for(iCnt=1;iCnt<=(iValue/2);iCnt++) //time complexity:o(N/2)
	{

	    if((iValue%iCnt)==0) //iCnt is a factor
	    {
		  printf("%d\n",iCnt);
        }
    }
}

int main()
{
	int iNo=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	DisplayFactors(iNo);

	return 0;
}