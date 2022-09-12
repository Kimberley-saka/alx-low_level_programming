#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{	putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
