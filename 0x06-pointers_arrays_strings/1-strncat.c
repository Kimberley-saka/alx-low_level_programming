#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatinates 2 strings
 *  @dest: first string.
 *  @src: second string
 *  @n: n bytes to use
 *  Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
