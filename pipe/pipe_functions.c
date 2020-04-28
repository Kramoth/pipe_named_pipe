#include"pipe_functions.h"

void SonFunction(int descriptor)
{
	char messageToRead[MESSAGE_SIZE];
	read(descriptor, messageToRead, MESSAGE_SIZE);
	printf("Son received = %s\n", messageToRead);
}
void FatherFunction(int descriptor)
{
	char messageToWrite[MESSAGE_SIZE];
	sprintf(messageToWrite,"hello from your father with the pid %d\n",getpid());
	printf("Father sent: %s\n", messageToWrite);

	write(descriptor, messageToWrite, MESSAGE_SIZE);
}