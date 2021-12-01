//WAP IN C TO CREATE NEW FILE BY TAKING FILE NAME FROM USER
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>

int main()
{
	int fd=0;
	char Fname[30];

	printf("Enter file name\n");
	scanf("%s",Fname);
	fd=creat(Fname,0777);//(7(4(read)+2(write)+1(execute)) //(0(octal)7(owner)7(group)7(others))
	if(fd== -1)
	{
		printf("Unable to create the file\n");
	}
	else
	{
		printf("File successfully created\n");
	}
	return 0;
}