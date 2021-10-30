#include <iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,int iPos1,int iPos2)
{
	 int iMask1=0x00000001;
	 int iMask2=0x00000001;
	 int iMask=0,iResult=0;
	iMask1=iMask1<<iPos1-1;
	iMask2=iMask2<<iPos2-1;
	iMask=iMask1|iMask2;
	iResult=iNo^iMask;
	return iResult;
}
int main()
{
	int iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter the first position of Toggle\n";
	cin>>i;
	cout<<"Enter the second position of Toggle\n";
	cin>>j;
	iRet=ToggleBit(iValue,i,j);
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}