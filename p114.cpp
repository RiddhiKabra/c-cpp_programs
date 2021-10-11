
//wap for factorial using while loop 
#include <iostream> 
#include<stdbool.h>//for bool datatype
using namespace std;
typedef unsigned long int UINT;
UINT Factorial(int iValue)
{
	UINT iFact = 1;
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}

	iCnt=1;  //1
	while(iCnt<=iValue) //2
	{
		iFact=iFact*iCnt; //4
		iCnt++;  //3
	}
	return iFact;
}

int main()
{
	int iNo=0;
	UINT iRet =0;

	cout<<"Enter number"<<"\n";
	cin>>iNo;
	
	iRet = Factorial(iNo);
	cout<<"Factorial is:"<<"\n"<<iRet;
	return 0;
}