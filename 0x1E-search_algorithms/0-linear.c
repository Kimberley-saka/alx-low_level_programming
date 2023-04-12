#include "search_algos.h"

/**
 * linear_search - searches for a value in a n array
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: -1 if value not present or null
 * index if value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
