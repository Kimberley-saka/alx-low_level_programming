#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: to be used to stored the digit
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
