#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number.
 * @bn: the decimal number to be printed in binary.
 *
 * Return: Success, binary number is printed.
 */
void print_binary(unsigned long int n)
{
    int i, cnt = 0;
    unsigned long int crrnt;

    for (i = 63; i >= 0; i--)
    {
        crrnt = n >> i;

        if (crrnt & 1)
        {
            _putchar('1');
            cnt++;
        }
        else if (cnt)
        {
            _putchar('0');
        }
    }

    if (!cnt)
    {
        _putchar('0');
    }
}
