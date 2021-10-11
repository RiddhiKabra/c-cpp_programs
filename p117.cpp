/*wap to break a number & display it
input:7521
output:
1
2
5
7
*/

#include <iostream> 
using namespace std;
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

 iDigit=iNo%10; //1
 cout<<"\n"<<iDigit;//1
 iNo=iNo/10; //752

 iDigit=iNo%10;//2
 cout<<"\n"<<iDigit;//2
 iNo=iNo/10;//75

 iDigit=iNo%10; //5
 cout<<"\n"<<iDigit;//5
 iNo=iNo/10;//7

 iDigit=iNo%10;//7
 cout<<"\n"<<iDigit;//7
 iNo=iNo/10;//0

}