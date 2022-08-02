#include "1-main.h"
/**
 * is_builtin - handles built in.. mainly not supported for now
 * @line: line inputed by the user
 * Return: 0 if not built in and 1 if built in
 */
int is_builtin(char *line)
{
	if (strcmp(line, "cd\n") == 0)
	{
		printf("we dont support %s yet\n", line);
		return (1);
	}

	if (strcmp(line, "env\n") == 0)
	{
		printf("we dont support %s yet\n", line);
		return (1);
	}

	return (0);
}

/**
 * execute - handles commands that are not built in
 * @line: line inputed by the user
 * Return: 0 if not a surported command and 1 if supported
 */
int execute(char *line)
{
	printf("you printed %s executing....", line);
	return (0);
}
