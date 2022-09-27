#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * Return: pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 * @accept: bytes to compare
 */

char *_strpbrk(char *s, char *accept)
{
	unsighned int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++
	}
	return (s);
}
