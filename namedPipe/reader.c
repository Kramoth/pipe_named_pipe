#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MESSAGE_SIZE 256


int main()
{
	char pipeName[]="pipe.fifo";
	char messageToRead[MESSAGE_SIZE];
	int descriptor0=open(pipeName,O_RDONLY);
	int ret;
	if(descriptor0==-1)
	{
		printf("failed to open named pipe\n");
		exit(1);
	}
	read(descriptor0,messageToRead,MESSAGE_SIZE);
	printf("received %s\n", messageToRead);
	ret=unlink("pipe.fifo");
	if(ret==0)
	{
		printf("fifo file deleted\n");
	}
}
