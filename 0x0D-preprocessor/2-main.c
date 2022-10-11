#include <stdio.h>

/**
 * main - prints file it was compiled from
 * Return: zero for success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
