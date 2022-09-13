
#include "main.h"

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 * Print_alphabet: Prints the alphabet characters in lower case
 */

int main(void)
{	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{	_putchar(i);
	}

	_putchar('\n');
}
