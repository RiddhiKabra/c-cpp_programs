/*factorial using for loop
Input- 2
Output-1*2=2
*/

#include <stdio.h>
int Fact(int iValue);
 int main()
 {
 	int iNo=0,iRet=0;
 	printf("Enter number\n");
    scanf("%d",&iNo);
    iRet=Fact(iNo);
    printf("Factorisl is:%d\n",iRet);
	return 0;
 }

 int Fact(int iValue)
 {
 	int iCnt=0;
 	int iFact=1;
 	for(iCnt=1;iCnt<=iValue;iCnt++)
 		{
		iFact=iFact*iCnt;
	}
	return iFact;

 }