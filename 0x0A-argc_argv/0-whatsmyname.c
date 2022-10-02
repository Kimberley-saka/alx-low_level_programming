#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count entered in the terminal
 * @argv: string of the arguments entered
 * Return: o for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
