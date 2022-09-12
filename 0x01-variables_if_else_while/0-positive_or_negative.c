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
	{	printf("%i is positive", n);
	}

	else if (n == 0)
	{	printf("%i is 0", n);
	}

	else
	{	printf("%i is negaive", n);
	}


	return (0);
}
