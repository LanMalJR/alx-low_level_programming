#include "main.h"

/**
 * set_bit - Sets a bit at a given ndx to 1.
 * @n: Pointer to the number to modify.
 * @ndx: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int ndx)
{
	if (ndx > 63)
		return (-1);

	*n = ((1UL << ndx) | *n);
	return (1);
}
