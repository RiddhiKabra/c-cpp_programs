
//problem on string by using our own strlen function
#include <stdio.h>
typedef unsigned int UINT;
UINT  strlenX(char*str)
{
	int iCnt=0;
	if(str==NULL)
		return 0;
    
	while(*str!='\0')
	{
		iCnt++;
	    str++;
	}
return iCnt;  
}

int main()
{ int iRet=0;
	char Arr[200];
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr); //Address 10
//char*ptr=NULL; 
    iRet=strlenX(Arr); //strlenX(50); //strlenX(ptr);
    printf("Length of string is :%d\n",iRet);
	return 0;
}