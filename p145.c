
/*problem on bitwise operator
wap to check whether 7th & 12th bit is on or not
i/p:4
o/p:100
*/
#include<stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(int iNo)
{
  UINT iMask=0x00000840;  //0000 0000 0000 0000 0000 1000 0100 0000
                          //0      0    0   0     0    8   4   0
                          //0x00000840  

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
    printf("7th & 12th bits is On\n");
  }
  else
  {
     printf(" bits is Off\n");
  }
  return 0;
}
//error