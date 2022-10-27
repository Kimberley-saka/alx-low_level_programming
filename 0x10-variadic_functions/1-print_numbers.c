#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int numbers;
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arg_list, int);
		printf("%d", numbers);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
