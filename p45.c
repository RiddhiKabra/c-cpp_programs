/*Accept number from user and display below pattern.
Input : 5
Output : A B C D E
Program Layout :*/
#include<stdio.h>
void Pattern(int iNo)
{
  int iCnt=0;
  char ch='a' ;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
   	printf("%c\t",ch);
    ch++;
  }
  printf("\n");
}
int main()
{
int iValue = 0;
printf("Enter number of elements");
scanf("%d",&iValue);
Pattern(iValue);
return 0;
}