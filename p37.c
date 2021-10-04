//Display table by taking input from user
#include<stdio.h>
void DisplayTable(int);
int main()
{
    int iValue = 0;
    printf("Enter number to display its table\n");
    scanf("%d",&iValue);
    
    DisplayTable(iValue);
  
    return 0;
}

void DisplayTable(int iNo)
{
	if(iNo==0)
	{
		return;
	}
	int iTable=0, iCnt=0;
	for(iCnt=1;iCnt<=10;iCnt++)

		{
			iTable=iNo*iCnt;
			printf("%d\t",iTable);
        }
}