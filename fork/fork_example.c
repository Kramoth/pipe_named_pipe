#include<stdio.h>
#include"fork_example.h"

int main()
{
	pid_t pSon;
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
		/*
		if pSon equal to 0 it means that we are in the son's thread
		we will execute the SonFuntion
		*/
		SonFunction();
	}
	else
	{
			
	// 	if pSon not equal to 0 or -1 it means that we are in the father's thread (main one)
	// 	we will execute the FatherFuntion
		
	
		FatherFunction(pSon);
	}
}
void SonFunction()
{
	printf("I am the Son, my pid is %d and my father pid is %d\n",getpid(), getppid() );
}
void FatherFunction(pid_t iPid)
{
	printf("I am the Father, my pid is %d and my son's pid is %d\n",getpid(), iPid );
}



