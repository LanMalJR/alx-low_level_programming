#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string length to be calculated
 *
 * Return: 1 (Success)
 * Error, -1 is returned
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
