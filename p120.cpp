/*wap to break a number & display its addition  by using while loop
input21
output:2+1=3

*/
#include <iostream> 
using namespace std;
int AddDigit(int);

int main()
{
    int iValue=0 ,iRet=0;
    cout<<"Enter number"<<"\n";
    cin>>iValue;
   
	iRet=AddDigit(iValue);
    cout<<"Addition of digits is:"<<"\n"<<iRet;
	return 0;
}

int AddDigit(int iNo)
{
    int iDigit=0;
    int iSum=0;
    
while(iNo != 0)
{
    iDigit = iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
}
 return iSum;
}
