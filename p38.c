/*Find out power of number taking input from user
input :x=3,y=2
Output=9(3^2)
*/
#include<stdio.h>
int Power(int,int);
int main()
{
    int iExponent =0,iBase = 0 , iRet=0;
    printf("Base is: \n");
    scanf("%d",&iBase);

    printf("Exponent is: \n");
    scanf("%d",&iExponent);
    iRet=Power(iBase,iExponent);
    printf("Power is:%d \n",iRet);
     
  
  
    return 0;
}

int Power(int x,int y)
{
	int iCnt=0,iMult=1;
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iMult=iMult*x;
	}
	return iMult;
}