#include "main.h"
/**
 * print_alphabet_x10 -prints the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	for (int j = 1; j <= 10; j++)

	{	for (char i = 'a'; i <= 'z'; i++)
		{_putchar(i);	
		}
		_putchar('\n');
	}
}
