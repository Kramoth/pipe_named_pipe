#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define MESSAGE_SIZE 256

int main()
{
	char pipeName[]="pipe.fifo";
	char messageToWrite[MESSAGE_SIZE]="A message from the writer";
	int fifo=0;
	fifo=mkfifo(pipeName,0644);

	if(fifo!=0)
	{
		printf("failed to create named pipe\n");
		exit(1);
	}
	int descriptor1=open(pipeName,O_WRONLY);
	if(descriptor1==-1)
	{
		printf("named pipe not available\n");
		exit(1);
	}
	write(descriptor1,messageToWrite,MESSAGE_SIZE);
}
