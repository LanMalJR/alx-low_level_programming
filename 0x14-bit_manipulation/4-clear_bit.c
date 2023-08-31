#include "main.h"

/**
 * clear_bit - Changes the value of a designated bit to 0.
 * @n: Pointer to the number to be modified.
 * @ndx: Position of the bit to reset to 0.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int ndx)
{
	if (ndx > 63)
		return (-1);

	*n = (~(1UL << ndx) & *n);
	return (1);
}
