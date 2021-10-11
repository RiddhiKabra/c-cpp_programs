//wap to check whether number is even or odd
#include <iostream> 
#include<stdbool.h>//for bool datatype
using namespace std;
bool CheckEven(int iValue)
{
	if(iValue%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo=0;
	bool bRet=false; //bool bRet=0;
	cout<<"Enter number"<<"\n";
	scanf("%d",&iNo);
	bRet= CheckEven(iNo);

	if(bRet==true)
	{
	 cout<<"number is even"<<"\n";
	}
	else
	{
		cout<<"number is odd"<<"\n";
	}
	return 0;
}