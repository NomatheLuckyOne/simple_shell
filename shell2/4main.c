#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char *av[] = {"/bin/ls", "-l", NULL};
	i = execve(av[0], av, NULL);
	if (i < 0)
	{
		printf("could not execute");
		return (-1);
	}

	printf("this was written");
	return 0;
}
