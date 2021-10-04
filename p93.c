/*program on strings 
 Input:Hello
 Output:Small letters in the string are :4

 */

#include <stdio.h>
typedef unsigned int UINT;
UINT  SmallCount(char*str)
{
	int iCnt=0;
	if(str==NULL)
		{
			return 0;
         }
	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
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

    iRet=SmallCount(Arr);
    printf("Small letters in the string are :%d\n",iRet);
	return 0;
}