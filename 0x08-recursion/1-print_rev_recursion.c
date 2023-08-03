#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: prints string
 *
 * Return: 1 (Success)
 * error, -1 is returned
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
