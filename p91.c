//check whether entered input is capitlal convert it into small

#include<stdio.h>
char CapitalToSmall(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return c+32;
	}
	
}

int main()

{
    char ch='\0',cRet='\0';
	
	printf("Enter Character:\n");
	scanf("%c",&ch);

	cRet=CapitalToSmall(ch);
	
   printf("Small letter is:%c\n",cRet);
		
	return 0;
}