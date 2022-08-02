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
		if (ac != 1)
		{
			printf("invaid av");
			return (-1);
		}

		printf("$ ");
		get = getline(&line, &len, stdin);
		if (get < 0)
		{
			printf("could not get line");
			return (-1);
		}
		token1 = token(line);

		if (strcmp(token1[0], "\n") == 0)
			continue;
		if (strcmp(token1[0], "EXIT\n") == 0)
			break;
		if (is_builtin(token1[0]))
			continue;
		if (!execute(token1[0]))
		{
			continue;
		}

	}
	return (0);




}
