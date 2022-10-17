#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of integers
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
		p[i] = min;
	return (p);
}
