#include <stdio.h>

/**
 * main - prints the number or arguments passed
 * @argc: number of arguments passed to the terminal
 * @argv: argument vector of pointers to strings
 * Return: zero for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
