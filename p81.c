//problem on string by using pointer and while loop
#include <stdio.h>

void Display(char*Brr)
{

	while(*Brr!='\0')
	{
		printf("%c\n", *Brr);
	    Brr++;
    }
}
int main()
{
	char Arr[200];
	printf("Enter your name\n");
	scanf("%[^'\n']s",&Arr); //Address 10

    Display(Arr);
	return 0;
}