#include <stdio.h>
void DisplayAsciitable()
{
    int i=0;

    printf("Ascii table is\n");
    printf("----------------------------------------\n");
    printf("Decimal\t Character\n");
    printf("-----------------------------------------------------\n");
    for(i=0;i<=127;i++)
    {
    	printf("%d\t %c\n",i,i);
    }
    printf("---------------------------------------\n");
}

int main()
{

    DisplayAsciitable();
	return 0;
}