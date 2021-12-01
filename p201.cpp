
//byte swap
#include <iostream>
using namespace std;
typedef unsigned int UINT;
UINT SwapByte(UINT iNo)
{

	return (iNo& 0x00ffff00) |(iNo<<24) |(iNo>>24);
	
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
