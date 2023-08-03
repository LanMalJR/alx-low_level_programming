#include "main.h"

/**
 * prime - calculates whether it's a prime
 * number or not
 * @x: number to be estimated
 * @y: iterator
 *
 * Return: 1 (success)
 * Error, -1 is returned
 */

int prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime(x, y + 1));
}

/**
 * is_prime_num - says whether its a prime or not
 * @n: num to be checked
 *
 * Return: 1 (success)
 * Error, -1 is returned
 */

int is_prime_num(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
