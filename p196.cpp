#include <iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleOnRange(UINT iNo,int iStart,int iEnd)
{
	UINT iMask1=0xffffffff;
    UINT iMask2=0xffffffff;
    UINT iMask=0;
    iMask1=iMask1<<(iStart-1);
    iMask2=iMask2>>(32-iEnd);
	UINT iResult=0;
	iMask=iMask1|iMask2;
	iResult=iNo^iMask;
	return iResult;
}
int main()
{
	UINT iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter number\n";
    cin>>iValue;
    cout<<"Enter starting position:\n";
    cin>>i;
    cout<<"Enter ending position:\n";
    cin>>j;
	iRet=ToggleOnRange(iValue,i,j);
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}