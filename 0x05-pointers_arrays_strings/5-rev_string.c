#include "main.h"
/**
 * rev_string - print reverse characters to the standard output
 * @s: the string to be printed in reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int b = 0;
	int chr;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > b)
	{
		chr = s[i];
		s[i--]= s[b];
		s[b++] = chr;
	}
}
