#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n integers of an array
 * @a: array elements
 * @n: number of array elements to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n > i)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
