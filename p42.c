/*Programs on pattern printing
input:2
output:2* 1*
*/
#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
   	printf("%d*\t",iCnt);
   }
} 

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}