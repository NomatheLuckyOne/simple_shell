#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int is_builtin(char *line);
int execute(char *line);
int wordcount(char *str);
char **token(char *str1);

#endif
