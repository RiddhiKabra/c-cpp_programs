/*wap to break a number & count even digits from that number by using while loop
input22
output:even digits= 2(digits)

*/
#include <stdio.h> 

int CountEven(int);

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
	iRet=CountEven(iValue);
    printf("Number of even digits is:%d\n", iRet);
	return 0;
}

int CountEven(int iNo)

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
    if((iDigit%2)==0)
    {
    iCnt++;
    }
    iNo=iNo/10;
 
}
 return iCnt;
}
