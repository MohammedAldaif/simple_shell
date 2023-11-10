#include "shell.h"
/**
 * print_string - prints a string to stdout
 * @str: string to be printed
 * Return: void
 */
void print_string(char *str)
{
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
