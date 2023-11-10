#include "shell.h"
/**
 * _putchar - write a character to the standard output.
 * @c: the character to be written
 * Return: success, returns the character * written, on error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
