//problem on string by using pointer
#include <stdio.h>

void Display(char*Brr)
{
	printf("Name is:%s\n", Brr);
}
int main()
{
	char Arr[200];
	printf("Enter your name\n");
	scanf("%[^'\n']s",&Arr); //Address 10

    Display(Arr);
	return 0;
}