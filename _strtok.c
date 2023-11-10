#include "shell.h"

/**
 * _strtok - Custom string tokenization function.
 * @str: The input string to tokenize.
 * @delim: The delimiter characters.
 *
 * Return: A pointer to the next token,
 * or NULL if no more tokens are found.
 */

char *_strtok(char *str, char *delim)
{
	static char *saved_str;
	char *token;

	if (str != NULL)
		saved_str = str;

	if (saved_str == NULL || *saved_str == '\0')
		return (NULL);

	while (*saved_str != '\0' && _strchr(delim, *saved_str) != NULL)
		saved_str++;

	if (*saved_str == '\0')
		return (NULL);

	token = saved_str;
	while (*saved_str != '\0' && _strchr(delim, *saved_str) == NULL)
		saved_str++;

	if (*saved_str != '\0')
	{
		*saved_str = '\0';
		saved_str++;
	}
	return (token);
}
