#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded string
 */

char *leet(char *str)
{
	char *a = "aeotl";
	char *b = "AEOTL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = str;

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == *(a + i) || *str == *(b + i))
			{
				*str = x[i];
			}
		}
		str++;
	}
	return (p);
}
