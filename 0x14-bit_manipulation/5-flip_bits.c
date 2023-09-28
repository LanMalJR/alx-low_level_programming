#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be changed
 *             to transform one number into another.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The number of bits that must be flipped.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
    int i, count = 0;
    unsigned long int currnt;
    unsigned long int exclsve = num1 ^ num2;

    for (i = 63; i >= 0; i--)
    {
        currnt = exclsve >> i;
        if (currnt & 1)
            count++;
    }

    return (count);
}
