#include "1-main.h"

/**
 * execute - handles commands that are not built in
 * @line: line inputed by the user
 * Return: 0 if not a surported command and 1 if supported
 */
int execute(char **line)
{
	int exec_h;
	
	char **str;
        str[0] = strdup(line[0]);
	
	str[0] = find_path(str[0]);
	int i = 1;
	
	
	//if (str == NULL)
	//{
	//	return (0);
	//}

	//line[0] = str[0];
	//
	
	

	pid_t pid = fork();

	if (pid < 0)
	{
		printf("could not fork");
		return (0);
	}

	if (pid == 0)
	{
		exec_h = execve(line[0], line, NULL);
		if (exec_h < 0)
		{
			printf("could not exeecute");
			return (0);
		}
		
	}
	else
	{
		wait(NULL);
	}
	return (1);
}
