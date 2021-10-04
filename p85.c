//Problem on string to print complete Ascii table  
#include <stdio.h>
void DisplayAsciitable()
{
    int i=0;

    printf("Ascii table is\n");
    printf("Decimal\tHexadecimal\tOctal\tCharacter\n");
     
    for(i=0;i<=127;i++)
    {
    	printf("%d\t%x\t%o\t%c\n",i,i,i,i);
    }
    
}

int main()
{

    DisplayAsciitable();
	return 0;
}