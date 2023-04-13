#include "search_algos.h"

/**
 * binary_search - searches an item using the binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: -1 if value not present or null
 * index if value found
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (array == NULL)
	    return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		
		}
		printf("\n");
		
		mid = (left + right) / 2;
		
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
