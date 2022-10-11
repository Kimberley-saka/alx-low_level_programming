#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * Return: 0
 */

int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(str);
	printf("%s", p);
	printf("%s", str);
	return (0);
}
