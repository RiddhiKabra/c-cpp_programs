/*program on strings 
 Input:Hello
 Output:Small letters in the string are :4
 Capital letters in the string are :1

 */

#include <stdio.h>

void Count(char*str)

{
	int CCount=0,SCount=0;

	if(str==NULL)

		return 0;
    
	while(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			SCount++;
		}
		else if((*str>='A') && (*str<='Z'))
		{
           CCount++;
		}
	
	    str++;
	}
   
   printf("Small letters in the string are :%d\n",SCount);
    printf("Capital letters in the string are :%d\n",CCount);

}

int main()
{ 
	char Arr[200];
	printf("Enter string\n");
	scanf("%[^'\n']s",&Arr);

    Count(Arr); 
   
	return 0;
}

 