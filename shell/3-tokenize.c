#include "1-main.h"
/**
 * 
 */
char **token(char *str1)
{
	char *str = strdup(str1);
	int i = 0;
	int str_len;
	int count = wordcount(str);

	char **array = malloc(sizeof(char *) * count); // 4 is to be the word count

// to remove the newline char added by getlinE
	str_len = strlen(str);
	if (str[str_len - 1] == '\n')
		str[str_len - 1] = '\0';

	

	if (array == NULL)
	{
		printf("could not allocate");
		return (NULL);
	}

	array[i] = strtok(str, " ");

	while (array[i] != NULL)
	{
		i++;
		array[i] = strtok(NULL, " ");
	
	}


	return (array);
}
/**
 * wordcount - counts the numbers of words in a string
 * Return: the amount of words in a string
 */
int wordcount(char *str)
{
	int word = 0, i;
	int flag = 0;
	char delim = ' ';
	for (i = 0; str[i]; i++)
	{
		if (str[i] == delim)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			word++;
		}
	}
	return (word);
}
