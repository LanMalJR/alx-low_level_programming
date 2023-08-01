#include <unistd>

/**
 * _putchar - writes character c to standard output
 * @c: The character to print
 * Return: Success 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
