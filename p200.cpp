//byte swap
#include <iostream>
using namespace std;
typedef unsigned int UINT;
UINT SwapByte(UINT iNo)
{
	UINT iMask=0x00ffff00;

	UINT iTemp=iNo& iMask;
	UINT Byte1=iNo<<24;
	UINT Byte4=iNo>>24;
	UINT iResult= iTemp  |Byte1 |Byte4;
	//return iTemp  |Byte1 |Byte4;
}
int main()
{
	UINT iValue=0,iRet=0;
	cout<<"Enter number\n";
    cin>>iValue;
	iRet=SwapByte(iValue);
    cout<<"After swapping byrte:"<<iRet;
	return 0;
}
