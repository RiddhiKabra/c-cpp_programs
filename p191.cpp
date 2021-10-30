#include <iostream>
using namespace std;
typedef unsigned int UINT;

/*

op1 op2  &  |  ^
1  1     1  1  0
0  1     0  1  1 
1  0     0   1  1
0   0    0   0   0
*/


/*
position=5
iMask(orginal)= 0 0 0 0 0 0 0 1
iMask=iMask<<(Position-1)
iMask=iMask<<(5-1)
iMask=iMask<<4
iMask(updated)0 1 1 0 1 0 0 0
iMask= 0 1 1 0 1 0 0 0
                          ^
i/p    0 0 0 1 0 0 0 0   
----------------------------
o/p    0 1 1 1 0 1 0 0
*/
UINT ToggleBit(UINT iNo,int iPos)
{
	 int iMask=0x00000001;
	 int iResult=0;
	if((iPos<1) || (iPos>32))
	{
		return 0;
	}
	iMask=iMask<<(iPos-1);
	iResult=iNo^iMask;
	return iResult;
}
int main()
{
	int iValue=0,iRet=0,i=0;
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter the position of Toggle\n";
	cin>>i;
	iRet=ToggleBit(iValue,i);
	cout<<"Updated number is:"<<iRet<<"\n";
	return 0;
}