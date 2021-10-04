/*wap to break a number & display total number of digits by using while loop
input21
output:21= 2(digits)

*/
#include <stdio.h> 

int CountDigit(int);

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
	iRet=CountDigit(iValue);
    printf("Number of digits is:%d\n", iRet);
	return 0;
}

int CountDigit(int iNo)

{
    int iDigit=0;
    int iCnt=0;

if(iNo==0)
{
    return 1;
}

    if(iNo>0)//updater
    {
        iNo= -iNo;
    }
    
while(iNo != 0)
{
    iDigit = iNo%10;
    iCnt++;
    iNo=iNo/10;
 
}
 return iCnt;
}
