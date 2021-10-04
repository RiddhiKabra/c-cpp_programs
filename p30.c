/*wap to break a number & count odd digits from that number and add them by using while loop
input:213
output:4(1+3)
*/


#include <stdio.h> 

int SumOdd(int);

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet=SumOdd(iValue);
    printf("Addition of Number of odd digits is:%d\n", iRet);
    return 0;
}

int SumOdd(int iNo)

{
    int iDigit=0,iSum=0;

    if(iNo<0)//updater
    {
        iNo= -iNo;
    }
    
while(iNo != 0)
{

iDigit = iNo%10;
    if((iDigit%2)!=0)
    {
    iSum =iSum+iDigit;
    }
    iNo=iNo/10;
 
}
 return iSum;
}
