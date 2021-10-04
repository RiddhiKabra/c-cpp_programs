/*wap to break a number & display by using while loop
input:7521
output:
1
2
5
7
*/
#include <stdio.h> 

void Display();

int main()
{
	Display();

	return 0;
}

void Display()
{
    int iNo=7521;
    int iDigit=0;

while(iNo != 0)
{
    iDigit = iNo%10;
    printf("%d\n",iDigit);
    iNo= iNo/10;
}

}
