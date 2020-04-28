#include"pipe_functions.h"
int main()
{
	pid_t pSon;
	int descriptor[2];
	char message[256];

	pipe(descriptor);
	pSon=fork();
	if (pSon==-1)
	{
		/*
		if pSon equal to -1 it means the fork function failed so we exit
		*/
		printf("Oops...fork failed\n");
		exit(1);
	}
	if(pSon==0)
	{
		SonFunction(descriptor[0]);
	}
	else
	{
		FatherFunction(descriptor[1]);
	}
}