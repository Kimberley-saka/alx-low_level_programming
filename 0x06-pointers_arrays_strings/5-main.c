#include "main.h"
#include <stdio.h>
/**
 * main - checks code
 * Return: 0 for success
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
