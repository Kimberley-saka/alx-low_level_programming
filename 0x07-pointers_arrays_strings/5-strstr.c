#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int n = 0;

	while (needle[n] != '\0')
		n++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, n) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
