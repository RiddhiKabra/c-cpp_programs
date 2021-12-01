
/*problem on bitwise operator
wap to check whether first 4 bits(nibble) bit are on or not
i/p:4
o/p:100
*/
#include<stdio.h>
#include <stdbool.h>
typedef unsigned int UINT;
bool CheckBit(int iNo)
{
  UINT iMask=0x0000000f;  //0000 0000 0000 0000 0000 0000 0000 1111
                          //0      0    0   0     0     0   0   f
                          //0x00000000f 

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
    printf("First 4 bits is On\n");
  }
  else
  {
     printf(" First 4 bits is Off\n");
  }
  return 0;
}