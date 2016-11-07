#include<stdlib.h>
#include<stdio.h>


int main()
{
int pid;
int status = 0;
int Ppid,Cpid;
for(int i=0;i<3;i++)
{
	pid = fork();
	if(pid!=0)
	{
		printf("Child PID = %d\n",pid);
		pid = wait(&status);

	}
	else
	{
		Ppid = getppid();
		Cpid = getpid();
		printf("Parent PID:%d\nChild PID:%d\n",Ppid,Cpid);
		exit(status);
	}
}
return 0;
}
