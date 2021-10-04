//problem on string
#include <stdio.h>

int main()
{
	char Arr[11]="Marvellous";
	printf("%s\n",&Arr[0]); //Marvellous   //10 Address
    printf("%s\n",&Arr[5]);//llous         //15 Address
    printf("%s\n",&Arr[9]);//s            //19 Address
	
	 printf("%s\n",Arr);  //Marvellous     //10 Address
     printf("%s\n",Arr+5);//llous         //15 Address
      printf("%s\n",Arr+9);//s         //19 Address
	return 0;   
}