//WAP IN C TO WRITE NEW FILE BY TAKING FILE NAME FROM USER
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";
	printf("Enter file name\n");
	scanf("%s",Fname);
	fd=open(Fname,O_RDWR);
	if(fd== -1)
	{
		printf("Unable to open the file\n");
	    return-1; //Return to OS
	}
	else
	{
		printf("File successfully opened with FD:%d\n",fd);
	}
    iRet=write(fd,Data,10);//iRet=write(fd,Data,10(total no.of bytes to be written in file));
    printf("%d bytes gets successsfully written in the  file\n",iRet );

	return 0;
}