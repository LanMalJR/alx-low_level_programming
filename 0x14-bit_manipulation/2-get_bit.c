#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index in a
 * decimal number
 * @num: the decimal number to search
 * @index: the index of the bit to retrieve (0-based)
 *
 * Return: the value (0 or 1) of the bit at the specified index, or
 * -1 if the index is out of range
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (num >> index) & 1;

	return (bit_val);
}
