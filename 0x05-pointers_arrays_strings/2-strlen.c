#include "main.h"
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @s: string to be used
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
