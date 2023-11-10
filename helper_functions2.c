#include "shell.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
		i++, s++;
	return (i);
}

/**
 * _strcpy - check the code for Holberton School students.
 *@dest: input
 *@src: input
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	while (x < l)
	{
		dest[x] = src[x];
		x++;
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * _strcat - check the code for Holberton School students.
 * @dest: input
 * @src: input
 * Return: pointer.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = *(src + j);
	return (dest);
}
