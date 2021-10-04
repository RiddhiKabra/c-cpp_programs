//problem on string by using pointer
#include <stdio.h>

void Display(char*Brr)
{
	printf("%c\n", *Brr);
	Brr++;
    printf("%c\n", *Brr);
	Brr++;	
	printf("%c\n", *Brr);
	Brr++;
	printf("%c\n", *Brr);
	Brr++;
	printf("%c\n",* Brr);
	Brr++;
}
int main()
{
	char Arr[200];
	printf("Enter your name\n");
	scanf("%[^'\n']s",&Arr); //Address 10

    Display(Arr);
	return 0;
}