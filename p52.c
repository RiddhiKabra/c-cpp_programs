/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output :
     *
    * *
  *  *  *
*  *  *  *
Program Layout :*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
int i=0,j=0;
if(iRow != iCol)
{
 return;
}
{


}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}
//incomplete