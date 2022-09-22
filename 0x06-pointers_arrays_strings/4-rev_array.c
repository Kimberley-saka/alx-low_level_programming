#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array to be eversed
 * @n: number of elementsof the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp =  a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d,", a[i]);
	}
}
