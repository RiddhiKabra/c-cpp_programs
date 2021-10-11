/*wap to add nos by taking i/p from user
input:5
output:1+2+3+4+5=15
*/
#include<iostream>
using namespace std;

int Add(int iValue)
{
	int iSum=0;
	int iCnt=0;
	for (int iCnt= 1; iCnt <=iValue; iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}

int main()
{
	int iNo=0,iRet=0;
    cout<<"Enter number"<<"\n";
    cin>>iNo;
    iRet=Add(iNo);
   cout<<"Addition is:"<<"\n"<<iRet;
	return 0;
}
