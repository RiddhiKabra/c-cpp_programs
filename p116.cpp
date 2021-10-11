//wap to display factors of a number
#include <iostream> 
using namespace std;

void DisplayFactors(int iValue)//hungarian notation (D)isplay(F)actors
{
	int iCnt=0;
	if (iValue<0)
	{
		iValue =- iValue;
	}
	
	
	for(iCnt=1;iCnt<=(iValue/2);iCnt++) //time complexity:o(N/2)
	{

	    if((iValue%iCnt)==0) //iCnt is a factor
	    {
		  cout<<"\n"<<iCnt;
        }
    }
}

int main()
{
	int iNo=0;
	cout<<"Enter number"<<"\n";
	cin>>iNo;
	DisplayFactors(iNo);

	return 0;
}