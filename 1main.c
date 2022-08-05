# include <stdio.h>
#include <stdlib.h>

int main(void)
{
	ssize_t get;
	char *buffer = NULL;
	ssize_t number = 0;

	
	if (buffer < 0)
		return (-1);
	printf("$ ");
	get = getline(&buffer, &number, stdin);
	if (get < 0)
		return (0);
	printf("you typed %s\n", buffer);
	return (0);

}
