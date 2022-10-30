#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which the cmp
 * function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < cmp; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
}
