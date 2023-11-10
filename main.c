#include "shell.h"

/**
 * main - entry point
 * @ac: input
 * @av: input
 * Return: int
 */

int main(int ac, char **av);

int main(int ac, char **av)
{
	char *line = NULL;
	size_t len = 0;
	char *token = NULL;
	char *tokens[64];
	int i;
	ssize_t read;

	while (1)
	{
		i = 0;

		(void) ac;
		(void) av;

		if (isatty(STDIN_FILENO))
			print_string("($) ");

		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			free(line);
			exit(0);
		}
		token = _strtok(line, " \t\n");
		while (token != NULL)
		{
		tokens[i] = token;
		token = _strtok(NULL, " \t\n");
		i++;
		}
		tokens[i] = NULL;

		if (tokens[0])
		{
			if (_strcmp(tokens[0], "exit") == 0)
			{
				free(line);
				exit(0);
			}
			create_child_process(tokens);
		}
	}
	return (0);
}
