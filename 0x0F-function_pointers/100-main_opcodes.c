#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: int type argument count
 * @argv: argument vector
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	int count;

	count = 0;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (count < atoi(argv[1]))
	{
		printf("%02x", *((unsigned char *)main + count));
		count++;
		if (atoi(argv[1]) > count)
			printf(" ");
	}
	printf("\n");
	return (0);
}
