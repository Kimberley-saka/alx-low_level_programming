#include "main.h"
/**
 * _puts - prints a string to the standard output
 * @str: the string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
