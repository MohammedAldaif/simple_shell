#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/*#include <string.h>*/
#include <stdbool.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <syscall.h>
#include <stddef.h>

#define READ_SIZE 1024
#define MAX_STRING_LENGTH 4096
#define MAX_INPUT 1024
#define MAX_PATH 4096
#define MAX_TOKENS 128
#define DELIMITER "\n\t"

extern char **environ;

void create_child_process(char *tokens[]);
void print_string(char *str);
char *_strtok(char *str, char *delim);
char *_strchr(char *s, char c);
int _strcspn(const char *s, const char *reject);
int _strcmp(char *s1, char *s2);
int _atoi(char *c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _putchar(char c);

#endif

