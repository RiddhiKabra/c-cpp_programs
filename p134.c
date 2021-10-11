//wap to check if string is palindrome or not
#include <stdio.h>
#include <stdbool.h>
bool CountPalindrome(char*str)
{
	char*start=NULL;
	char*end=NULL;
	bool flag=true;
    start=str;
    end=str;
    while(*end !='\0')
    {
    	end++;//56
    }
    end--;//55
    while(start<end)
    {
    	if (*start!= *end)
    	{
    		flag= false;
    		break;
    	}
    	start++;
    	end--;
    }
  return flag;
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