
/*problem on bitwise operator
wap to check whether 21st bit is on or not
i/p:4
o/p:100
*/
#include<stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(int iNo)
{
	UINT iMask=0x0010000;
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
    printf("4th bit is On\n");
  }
  else
  {
     printf("4th bit is Off\n");
  }
	return 0;
}