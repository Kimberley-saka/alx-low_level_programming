#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
