#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @bnum: String containing the binary number.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *bnum)
{
	int i;
	unsigned int dec_val = 0;

	if (!bnum)
		return (0);

	for (i = 0; bnum[i]; i++)
	{
		if (bnum[i] < '0' || bnum[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (bnum[i] - '0');
	}

	return (dec_val);
}
