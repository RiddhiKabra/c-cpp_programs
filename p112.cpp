/*factorial using for loop by writing updater
Input- 2
Output-1*2=2
*/
#include<iostream>
using namespace std;

typedef unsigned long int UINT;

 UINT Factorial(int);         // Declaration

int main()
{
    int iNo = 0;
    UINT  iRet = 0;
    
    cout<<"Enter number:"<<"\n";
    cin>>iNo;
    
    iRet = Factorial(iNo);
    
    cout<<"Factortial is :"<<"\n"<<iRet;
    
    return 0;
}
UINT Factorial(int iValue)
{
    UINT iFact = 1 ;
    int iCnt = 0;
    
    if(iValue < 0)  // Updator
    {
        iValue = -iValue;
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        iFact = iFact * iCnt; //  4
    }
    return iFact;
}