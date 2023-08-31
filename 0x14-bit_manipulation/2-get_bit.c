#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a specific index in a decimal number.
 * @n: The number to examine.
 * @ndx: The index of the bit to retrieve.
 *
 * Return: The value of the specified bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int ndx)
{
	int bit_value;

	if (ndx > 63)
		return (-1);

	bit_value = (n >> ndx) & 1;

	return (bit_value);
}
