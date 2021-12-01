/*problem on bitwise operator
wap to check whether 4th bit is on or not using UINT typedef
i/p:4
o/p:100
*/
#include<stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(int iNo)
{
	UINT iMask=0x00000008;
 UINT iResult=0;
 iResult=iNo&iMask;
 if (iResult==iMask)
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
  int iValue=0;
  bool bRet=false;
  printf("Enter number:\n");
  scanf("%d",&iValue);
  bRet= CheckBit(iValue);
  if(bRet==true)
  {
    printf("21st bit is On\n");
  }
  else
  {
     printf("21st bit is Off\n");
  }
	return 0;
}