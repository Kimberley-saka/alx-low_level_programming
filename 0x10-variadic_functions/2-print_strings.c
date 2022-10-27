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
	va_list pointer;
	unsigned int i;
	char *s;

	if (separator == NULL)
		return;
	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(pointer, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	va_end(pointer);
	printf("\n");
}
