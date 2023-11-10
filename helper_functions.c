#include "shell.h"

/**
 * _strchr - Find the first occurrence
 * of a character in a string.
 * @s: The input string to search.
 * @c: The character to find in the string.
 * Return: A pointer to the first occurrence
 * of 'c' in 's, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		{
			/* Return a pointer to the first occurrence of 'c'. */
			return (s);
		}
		s++;
	}

	/* Character 'c' was not found. */
	return (NULL);
}

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: input
 * @s2: input
 * Return: pointer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s2 + i) != '\0' && *(s1 + i) != '\0')
	{
		if (*(s1 + i) - *(s2 + i) != 0)
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

/**
 * _strcspn - Calculate the length of the initial segment of a string
 * that consists entirely of bytes not in a 'reject' string.
 * @s: The input string to examine.
 * @reject: The string containing characters to reject from 's'.
 * Return: The number of bytes in the initial segment of 's' which are not
 * in the 'reject' string.
 */

int _strcspn(const char *s, const char *reject)
{
	const char *p, *r;
	int count = 0;

	for (p = s; *p != '\0'; p++)
	{
		for (r = reject; *r != '\0'; r++)
		{
			if (*p == *r)
			{
				return (count);
			}
		}
		count++;
	}

	return (count);
}

/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 * Return: A pointer to the duplicated string,
 * or NULL if str is NULL or memory allocation fails.
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	char *p = NULL;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(sizeof(char) * (_strlen(str) + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		*(copy + i) = *(str + i);
		i++;
	}
	*(copy + i) = *(str + i);
	p = copy;
	free(copy);
	return (p);
}

/**
 * _atoi - Convert a string to an integer.
 * @c: The input string to convert.
 *
 * Description:
 * This function takes a string `c` and converts it to an integer.
 * It iterates through the characters in the string, handling both
 * positive and negative signs and converting digit characters to their
 * corresponding integer values. It stops when a non-digit character
 * is encountered. The result is returned as an integer.
 *
 * Return: The integer value of the converted string
 * or 0 if not a valid integer.
 */

int _atoi(char *c)
{
	unsigned int n = 0;
	int sign = 1;
	int has_digits = 0;

	do {
		if (*c == '-')
			sign *= -1;
		else if (*c >= '0' && *c <= '9')
		{
			n = (n * 10) + (*c - '0');
			has_digits = 1;
		}
		else if (has_digits)
			break;
	} while (*c++);

	return (has_digits ? n * sign : 0);
}
