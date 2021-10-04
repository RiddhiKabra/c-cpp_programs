/*program on strings 
 Input:Hello World
Output:White Spaces in the string are :1 */

#include <stdio.h>
int SpaceCount(char*str)

{
	int iCount=0;

	if(str==NULL)

		return 0;
    
	while(*str!='\0')
	{
		if((*str==' '))
		{
			iCount++;
		}
	
	    str++;
	}
    return iCount++;
}

int main()
{ 
	char Arr[200];
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr);

   iRet= SpaceCount(Arr); 
   printf("White Spaces in the string are :%d\n",iRet);
   
	return 0;
}

 