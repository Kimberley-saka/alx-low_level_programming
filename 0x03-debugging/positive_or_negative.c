#include <stdlib.h>

#include <time.h>

#include<stdio.h>

#include "main.h"
/**
 * positive_or_negative - prints positive or negative number
 * @i: number being tested
 * Return: Always return 0 (Success)
 */
void positive_or_negative(int i)
{	if (i > 0)
	{	printf("%d is positive\n", i);
	}

	else if (i == 0)
	{	printf("%d is zero\n", i);
	}

	else
	{	printf("%d is negative\n", i);
	}
}
