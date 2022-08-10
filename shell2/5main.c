#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	char *arv[] = {"/bin/ls", "-la", NULL};
	printf("hello\n");

	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		execve(arv[0], arv, NULL);
		printf("I am in the child process");
	}
	else
	{
		wait(NULL);
		printf("I am in the parent process\n"); 
	}
	return (0);

}
