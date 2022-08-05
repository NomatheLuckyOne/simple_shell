#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	pid = getppid();

	printf("%u\n", pid);
	return (0);

}
