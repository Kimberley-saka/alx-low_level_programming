#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: ponter to be used fro swapping
 * @b: pointer to be used for swapping
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
