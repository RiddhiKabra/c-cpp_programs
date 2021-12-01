//Problems on digits using recursion 
#include <iostream>
using namespace std;

int SumI(int iNo)
{
	int iSum=0;
	while(iNo!=0)
	{
		int iSum=iSum+(iNo%10);
		iNo=iNo/10;		
	}
	return iSum;
}

int SumR(int iNo)
{
	static int iSum=0;
	if(iNo!=0)
	{
	    iSum=iSum+(iNo%10);
		iNo=iNo/10;	
		SumR(iNo);	
	}
	return iSum;
}

int main()
{
	int i=0,iRet=0;
	cout<<"Enter No.\n";
	cin>>i;
	iRet=SumR(i);
	//iRet=SumI();
	cout<<"Result:"<<iRet<<"\n";
	return 0;
}