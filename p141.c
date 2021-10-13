#include<stdio.h>
int main()
{
  int iValue=0;
  printf("Enter number:\n");
  scanf("%d",&iValue);
  printf("Hexadecimal number format is: %x\n",iValue );
printf("Octal number format is: %o\n",iValue );
printf("Decimal number format is: %d\n",iValue );
	return 0;
}