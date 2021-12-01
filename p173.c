//WAP IN C TO READ NEW FILE BY TAKING FILE NAME FROM USER
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[6];
	printf("Enter file name\n");
	scanf("%s",Fname);
	fd=open(Fname,O_RDWR);
	if(fd== -1)
	{
		printf("Unable to open the file\n");
	    return-1; 
	}
	else
	{
		printf("File successfully opened with FD:%d\n",fd);
	}
    iRet=read(fd,Data,7);
    printf("%d bytes gets successsfully read from the file\n",iRet );
    printf("Data fron the file is:\n");
    write(1,Data,iRet);
	return 0;
}