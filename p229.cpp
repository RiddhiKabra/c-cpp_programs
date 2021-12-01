//Problems on pattern printing using recursion 
#include <iostream>
using namespace std;

void DisplayI(int iNo)
{
	int iCnt=1;
	while(iCnt<=iNo)
	{
		cout<<"Riddhi\n";
		iCnt++;
	}
}

void DisplayR(int iNo)
{
	static int iCnt=1;
	if(iCnt<=iNo)
	{
		cout<<"Riddhi\n";
		iCnt++;
		DisplayR(iNo);
	}
}

int main()
{
	int i=0;
	printf("By iterative approach:\n");
	DisplayI(5);
	printf("\n");
	printf("By recursive approach:\n");
	DisplayR(5);
	return 0;
}