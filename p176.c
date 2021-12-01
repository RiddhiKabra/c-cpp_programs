//wap that copies data from one file to another.
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h>

int main()
{
	int fdSrc=0,fdDest=0,iRet=0;
	char Fname1[30];
	char Fname2[30];
	char Buffer[1024]; //1024bytes=1kb
	printf("Enter source file name\n");
	scanf("%s",Fname1);
	fdSrc=open(Fname1,O_RDONLY);
	if(fdSrc== -1)
	{
		printf("Unable to open the file\n");
	    return-1; 
	}
	else
	{
		printf("File successfully copied with FDSRC:%d\n",fdSrc);
	}
		printf("Enter source file name\n");
		scanf("%s",Fname2);
		fdDest=creat(Fname2,0777);

    printf("Data from file is:\n");
    while((iRet= read(fdSrc,Buffer,sizeof(Buffer)) )!=0)//read(fd,Buffer,sizeof(Buffer)) ,read function call
    {
       write(fdDest,Buffer,iRet);
    }
    close(fdSrc);
    close(fdDest);
	return 0;
}