/*check whether number is perfect or not bt writing only 2 functions
input:6
output:Number is perfect
input:16
output:Number is not perfect
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int);
int main()
{
	int iValue=0;
	bool bRet=CheckPerfect(iValue);
	printf("Enter number\n");
    scanf("%d",&iValue);
    if(bRet==true)
    {
    	printf("Number is perfect\n");
    }
    else
    {
    	printf("Number is not perfect\n");
    }
    return 0;
}

bool CheckPerfect(int iNo)
{

	int iSum =0,iCnt=0;
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	if (iSum==iNo)
	{
		return true;
	}
	else
	{
		return false;
	}

}
