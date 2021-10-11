//wap to check if string is palindrome or not
#include <stdio.h>
#include <stdbool.h>
bool CountPalindrome(char*str)
{
	
	char*end=NULL;
    
    end=str;
    while(*end !='\0')
    {
    	end++;//56
    }
    end--;//55
    while(str<end)
    {
    	if (*str!= *end)
    	{
    		break;
    	}
    	str++;
    	end--;
    }
    if (*str!= *end)
    {
    	return false;
    }
    else
    {
    	return  true;
    }
 
}
int main()
{
	char Arr[200];
	bool bRet=false;
	printf("Enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CountPalindrome(Arr);//CountPalindrome(51)
	if(bRet==true)
	{
		printf("It is Palindrome\n");
	}
	else
	{
		printf("It is not Palindrome\n");
	}
    return 0;
}