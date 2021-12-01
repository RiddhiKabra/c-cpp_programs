/*check whether number is perfect or not bt writing only 3 functions
input:602
output:Number is not palindrome
input:161
output:tNumber is palindrome*/


#include<stdbool.h>
#include <iostream> 
using namespace std;

int Reverse(int);
bool CheckPalindrome(int);

int main()
{
    int iValue = 0;
    bool bRet = false;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    bRet=CheckPallindrome(iValue);
    if(bRet == true)
    {
           cout<<"Number is Palindrome"<<"\n";
    }
    
    else
    {
        cout<<"Number is not palindrome"<<"\n";
    }
    return 0;
}
int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
bool CheckPalindrome(int iInput)
{
    int iNumber = 0;
    iNumber = Reverse(iInput);
    if(iNumber == iInput)
    {return true;}
    else
    {return false;}
}