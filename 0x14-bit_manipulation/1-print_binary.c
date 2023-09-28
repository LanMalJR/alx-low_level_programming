#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal
 * number.
 * @num: The decimal number to print in binary.
 */
void print_binary(unsigned long int num)
{
	int i, count = 0;
	unsigned long int currnt;

	for (i = 63; i >= 0; i--)
	{
		currnt = n >> i;

		if (currnt & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
