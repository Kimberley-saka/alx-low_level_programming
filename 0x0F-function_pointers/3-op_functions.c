#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add numbers
 * @a: num 1
 * @b: num 2
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - multiply numbers
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide numbers
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divide numbers, return the remainder
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
