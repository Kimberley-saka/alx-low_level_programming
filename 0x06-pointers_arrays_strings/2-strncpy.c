#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: pointer to string
 * @src: pointer to string as well
 * @n: another int variable
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		for (i = 0; i < n; i++)
		{
			dest[i++] = '\0';
		}
	}
	return (dest);
}
