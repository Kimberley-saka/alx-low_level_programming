#include "main.h"

/**
 * print_line - prints lines
 * Return: nothing
 * @n: charater to be passed number of lines
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
