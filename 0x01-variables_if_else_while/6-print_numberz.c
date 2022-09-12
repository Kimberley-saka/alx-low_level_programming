#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char  numbr = 0;

	while (numbr < 10)
	{	putchar((numbr % 10) + '0');
		numbr++;
	}

	putchar('\n');
	return (0);
}
