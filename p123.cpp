/*wap to break a number & count even digits from that number by using while loop
input21
output:21= 1(digits)

*/
 
#include <iostream> 
using namespace std;
int CountOdd(int);

int main()
{
    int iValue=0 ,iRet=0;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
	iRet=CountOdd(iValue);
    cout<<"Number of odd digits is:"<<"\n"<<iRet;
	return 0;
}

int CountOdd(int iNo)

{
    int iDigit=0;
    int iCnt=0;

if(iNo==0)
{
    return 1;
}

    if(iNo>0)//updater
    {
        iNo= -iNo;
    }
    
while(iNo != 0) //O(N) where N is natural number here N is number of digits // (N>=0) //O is called big O notation.
{ 
    iDigit = iNo%10;
    if((iDigit%2)!=0)
    {
    iCnt++;
    }
    iNo=iNo/10;
 
}
 return iCnt;
}
