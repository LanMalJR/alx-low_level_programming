#include "main.h"

/**
 *  _pow_recursion - raises c to the power of y
 *  @x: base number
 *  @y: power
 *
 *  Return: 1 (success)
 *  Error, -1 is returned
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
