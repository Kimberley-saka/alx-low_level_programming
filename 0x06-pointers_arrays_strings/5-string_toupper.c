#include "main.h"

/**
 * *string_toupper - changes lower case letters to upper
 * @a: string of array to be changed
 * Return: nothing
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] > 90 && a[i] != 10)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
