/*program on strings 
 Input:Hello
 Output Capital letters in the string are :1

 */

#include <stdio.h>
typedef unsigned int UINT;
UINT  CapitalCount(char*str)
{
	int iCnt=0;
	if(str==NULL)
		return 0;
    
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			iCnt++;
		}
	    str++;
	}
return iCnt;  
}

int main()
{ 
	int iRet=0;
	char Arr[200];
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr); 

    iRet=CapitalCount(Arr); 
    printf("Capital letters in the string are :%d\n",iRet);
	return 0;
}