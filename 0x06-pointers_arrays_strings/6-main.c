#include "main.h"
#include <stdio.h>
/**
 * main - checks code
 * Return: 0 for success
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello wor";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
