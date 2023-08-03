#include "main.h"

/**
 * factorial - gets the factorial of n
 * @n: is the integer that will return the factorial
 *
 * Return: 1 (success)
 * Error, -1 is returned
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
