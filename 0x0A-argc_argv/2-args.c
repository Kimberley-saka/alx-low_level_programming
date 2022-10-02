#include <stdio.h>

/**
 * main - pritns all arguments it recieves
 * @argc: argument count
 * @argv: array of arguments
 * Return: zero for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
