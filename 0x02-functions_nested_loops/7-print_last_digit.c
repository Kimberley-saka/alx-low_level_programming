#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: character used to store the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{       int last = n % 10;

	if (last < 0)
		last *= -1;
	_putcha(last + '0');
	return (last);
}
