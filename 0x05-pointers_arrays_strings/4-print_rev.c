#include "main.h"
/**
 * _puts - prints a string to the standard output
 * @str: the string to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
