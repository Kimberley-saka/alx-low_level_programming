#include <stdlib.h>

#include <time.h>

#include<stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */

int main(void)

{	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{	printf("%d is positive\n", n);
	}

	else if (n == 0)
	{	printf("%d is 0\n", n);
	}

	else
	{	printf("%d is negaive\n", n);
	}


	return (0);
}
