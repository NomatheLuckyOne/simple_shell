#include <string.h>
#include <stdio.h>

int main(void)
{
	char *str = "my name is Noma/Reinhard";
	char *str2 = strdup(str);
	char *str1;
	char *delim = " ";

	str1 = strtok(str2, delim);
	while (str1 != NULL)
	{
		printf("%s\n", str1);
		str1 = strtok(NULL, delim);
	}
	return (0);	
}

