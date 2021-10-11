#include <stdio.h>
int VowelCount(char*str)

{
	int iCount=0;

	if(str==NULL)
{
 	return -1 ;
}
    
	while(*str!='\0')
	{
		if((*str=='a') || (*str=='e')||(*str=='i') ||(*str=='o') ||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))

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
	iRet=VowelCount(Arr);
	printf("Number of vowels are:%d\n",iRet);
    return 0;
}