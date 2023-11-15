#include "shell.h"
/**
 * create_child_process - function
 * @tokens: input
 * Return: void
 */
void create_child_process(char *tokens[])
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("fork");
		exit(1);
	}
	else if (child == 0)
	{
		if (_strcmp(tokens[0], "exit") == 0)
		{
			exit(0);
		}
		else
		{
			if (execve(tokens[0], tokens, NULL) == -1)
			{
				exit(1);
			}
		}
	}
			else
			{
				waitpid(child, &status, 0);
			}
}
