#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("$ ");
	char *buffer = NULL;
	ssize_t num = 0;
	int get;

	get = getline(&buffer, &num, stdin);
	if (get < 0)
	{
		printf("error");
		return (-1);
	}

	char *str;
	str = strtok(buffer, " ");
       
	while (str != NULL)
	{
		printf("%s\n", str);
		str = strtok(NULL, " ");
	}	
	return 0;
}
