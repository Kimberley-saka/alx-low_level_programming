#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to be compared
 * @s2: strong 2 to be compared
 * Return: comp,string comparison value
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int comp  = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			comp = s1[i] - s2[i];
			break;
		}
	}
	return (comp);
}

