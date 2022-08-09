#include "1-main.h"
/**
 * find_path - find the path of a command
 * @str: str/ command to find the path
 * Return: return the complete filename if found and NULL if not found
 *
 */

char *find_path(char *str)
{
	unsigned int i = 0;
	struct stat st;
	char *path[20], fullname[1024];
	char *env_path;
	char *file;

	env_path = getenv("PATH");
	path[i] = strtok(env_path, ":");

	while (path[i] != NULL)
	{
		i++;
		path[i] = strtok(NULL, ":");
	}

	i = 0;
	while (path[i] != NULL)
	{
		memset(fullname, 0, sizeof(fullname));
		strcat(fullname, path[i]);
		strcat(fullname, "/");
		strcat(fullname, str);

		

		if (stat(fullname, &st) == 0)
		{
			printf("found bitch===sub_func\n");
			strcpy(file, fullname);
			return (file);
		}

		i++;

	}


	return (NULL);

}

