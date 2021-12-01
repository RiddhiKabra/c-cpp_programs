/*wap to take negative number & show reverse in negative mo. without using updater by using while loop
input:-213
output-312
*/
#include <iostream> 
using namespace std;
int Reverse(int);

int main()
{
    int iValue=0 ,iRet=0;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
    iRet=Reverse(iValue);
    cout<<"Reverse number is:"<<"\n"<< iRet;
    return 0;
}

int Reverse(int iNo)

{
    int iDigit=0,iRev=0;
    while(iNo != 0) //(iNo > 0)
{

   iDigit = iNo%10;
    cout<<iDigit<<"\n";
    iRev =((iRev*10)+iDigit);
    
    iNo=iNo/10;
 
}
 return iRev;
}