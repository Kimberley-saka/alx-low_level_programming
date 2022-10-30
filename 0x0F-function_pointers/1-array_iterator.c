#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes as parameter on each element of an array
 * @array: int type pointer
 * @size: size_t argument
 * @action: function pointer
 * return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
