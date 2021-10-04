/*wap to break a number & display it
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
 int iNo= 75.21;
 int iDigit=0;

 iDigit=iNo%10; //1
 printf("%d\n",iDigit);//1
 iNo=iNo/10; //752

 iDigit=iNo%10;//2
 printf("%d\n",iDigit);//2
 iNo=iNo/10;//75

 iDigit=iNo%10; //5
 printf("%d\n",iDigit);//5
 iNo=iNo/10;//7

 iDigit=iNo%10;//7
 printf("%d\n",iDigit);//7
 iNo=iNo/10;//0

}
