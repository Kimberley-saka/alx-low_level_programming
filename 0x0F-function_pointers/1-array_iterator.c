#include "main.h"

/**
 * array_iterator - executes a function on each element of an array
 * @size: size of the array
 * @array: array to execute func on
 * @action: pointer to the function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
