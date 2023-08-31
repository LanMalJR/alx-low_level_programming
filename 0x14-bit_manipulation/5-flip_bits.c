#include "main.h"

/**
 * flip_bits - Calculates the count of differing bits
 * required to transform one number into another.
 * @y: The initial number.
 * @z: The target number.
 *
 * Return: The count of differing bits to perform the transformation.
 */
unsigned int flip_bits(unsigned long int y, unsigned long int z)
{
	int i = 0;
	int cnt = 0;

	unsigned long int crrnt;
	unsigned long int xclusive = y ^ z;

	for (i = 63; i >= 0; i--)
	{
		crrnt = xclusive >> 1;
		if (crrnt & 1)
			cnt++;
	}

	return (crrnt);
}
