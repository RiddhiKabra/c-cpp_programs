//count frequency of charactee
#include <stdio.h>
int CountFrequency(char*str,char ch)
{
	int iCount=0;
	if(str==NULL)
{
 	return -1 ;
}
    
	while(*str!='\0')
	{
		if(*str==ch)

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
	char cValue='\0';
	printf("Enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character:\n");
	scanf(" %c",&cValue); 
	iRet=CountFrequency(Arr,cValue);
	printf("Frequency of character is:%d\n",iRet);
    return 0;
}