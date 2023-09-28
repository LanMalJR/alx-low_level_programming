#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to 1 in a given number.
 * @num: Pointer to the number to modify.
 * @indx: Index of the bit to set to 1 (0-based).
 *
 * Return: 1 for success, -1 for failure (if the index is out of range).
 */
int set_bit(unsigned long int *num, unsigned int indx)
{
	if (indx > 63)
	return (-1);

	*num = ((1UL << indx) | *num);

	return (1);
}
