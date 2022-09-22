#include "main.h"

/**
 * *cap_string - turns first letter of a word to caps
 * @arr: string to be worked on
 * Return: the changed string
 */

char *cap_string(char *arr)
{
	int a[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};
	int i, j;

	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[0] >= 97 && arr[0] <= 122)
		{
			arr[0] = arr[0] - 32;
		}
		for (j = 0; j < 14; j++)
		{
			if (arr[i] >= 97 && arr[i] <= 122 && arr[i - 1] == a[j])
				arr[i] = arr[i] - 32;
		}
	}
	return (arr);
}

