/*check whether number is perfect or not bt writing only 3 functions
input:6
output:Number is perfect
input:16
output:Number is not perfect
*/

#include<stdbool.h>
#include <iostream> 
using namespace std;

int SumFactors(int);
bool CheckPerfect(int);
int main()
{
	int iValue=0;
	bool bRet=CheckPerfect(iValue);
	
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    if(bRet==true)
    {
    	cout<<"Number is perfect"<<"\n";
    }
    else
    {
    	cout<<"Number is not perfect"<<"\n";
    }
    return 0;
}

bool CheckPerfect(int iNumber)
{
	int iRet=0;
	if (iNumber<0)
	{
		iNumber=-iNumber;
	}
	iRet=SumFactors(iNumber);
	if (iRet==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SumFactors(int iNo)
{
	int iSum =0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}