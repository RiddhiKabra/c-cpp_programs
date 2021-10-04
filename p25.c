/*wap to break a number & display its addition  by using while loop
input21
output:2+1=3

*/
#include <stdio.h> 

int AddDigit(int);

int main()
{
    int iValue=0 ,iRet=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
	iRet=AddDigit(iValue);
    printf("Addition of digits is:%d\n", iRet);
	return 0;
}

int AddDigit(int iNo)
{
    int iDigit=0;
    int iSum=0;
    
while(iNo != 0)
{
    iDigit = iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;

   
}
 return iSum;
}
