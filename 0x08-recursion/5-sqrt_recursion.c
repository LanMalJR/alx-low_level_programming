#include "main.h"

/**
 * the_sqr_recursion - it repeats the procedure until
 * the natural s number is found
 * @x: calculate the sq number
 * @y: iterates
 */

int the_sqrt_recursion(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (the_sqrt_recursion(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural sq number that will be rooted
 * @n: number to be rooted
 *
 * Return: Answer, the rooted number
 */

int _sqrt_recursion(int n)
{
	return (the_sqrt_recursion(n, 1));
}
