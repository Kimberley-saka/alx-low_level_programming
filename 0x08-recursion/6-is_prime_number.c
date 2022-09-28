#include "main.h"

/**
 * prime_check - checks to see if number is prime
 * @f: factor check
 * @p: possible prime number
 * Return: 1 if prime, 0 if not
 */

int prime_check(int f, int p)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_check(f + 1, p));
}
/**
 * is_prime_number -returns 1 if int is prime number and 0 otherwise
 * @n: number to be tested
 * Return: 1 if primenumber and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
