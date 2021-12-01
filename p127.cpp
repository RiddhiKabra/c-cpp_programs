/*wap and check whether that number is palindrome or not
input:-213
output-NOT PALINDROME(0)
input:-232
output-PALINDROME(1)
*/

#include<stdbool.h>
#include <iostream> 
using namespace std;

bool CheckPalindrome(int);

int main()
{
    int iValue=0;
    bool bRet=false;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    bRet=CheckPalindrome(iValue);
    if(bRet==true)
    {
        cout<<"Number is Palindrome"<<"\n";
    }
    else
    {
        cout<<"Number is not Palindrome"<<"\n";
    }
   
    return 0;
}

bool CheckPalindrome(int iNo)
{
    int iDigit=0,iRev=0;
    int iTemp=iNo;

    while(iNo != 0) 
{

    iDigit = iNo%10;

    iRev =((iRev*10)+iDigit);

    iNo=iNo/10;
 
}
    if(iRev==iTemp)
{
 return true;
}
else
{
    return false;
}
return iRev;
}
