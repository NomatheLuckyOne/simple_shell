#include "1-main.h"
/**
 * main - shell implimentation.
 *
 * description: print a prompt, get inpute from a user check if the command is built in
 * and handle accordingly.
 * Return: 0.
 */
int main(int ac, char *av[])
{
	int get;
	size_t len;
	char *line = NULL;
	char **token1;
//=============================================//

	while (1)
	{

		printf("$ ");
		get = getline(&line, &len, stdin);
		if (get < 0)
		{
			printf("could not get line");
			return (-1);
		}
		token1 = token(line);

		printf("token1 == %s\ntoken2 == %s\n", token1[0], token1[1]);
		printf("================\n");
		if (strcmp(line, "\n") == 0)
			continue;
		if (strcmp(token1[0], "EXIT") == 0)
			break;
		if (execute(token1))
		{
			printf("executed, at least i tired to\n");
		}

	}
	return (0);




}
