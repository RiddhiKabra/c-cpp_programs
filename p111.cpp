/*factorial using for loop
Input- 2
Output-1*2=2
*/
#include<iostream>
using namespace std;

int Fact(int iValue);
 int main()
 {
 	int iNo=0,iRet=0;
 	cout<<"Enter number:"<<"\n";
    cin>>iNo;
    iRet=Fact(iNo);
    cout<<"Factorial is:"<<"\n"<<iRet;
	return 0;
 }

 int Fact(int iValue)
 {
 	int iCnt=0;
 	int iFact=1;
 	for(iCnt=1;iCnt<=iValue;iCnt++)
 	{
		iFact=iFact*iCnt;
	}
	return iFact;

 }