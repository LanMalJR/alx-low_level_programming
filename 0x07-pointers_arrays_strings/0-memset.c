#include "main.h"

/**
 **_memset - fill n by memeory area
 *@s: memeory area
 *@b: byte to fill
 *@n: number of b to be copied.
 *
 *Return: pointer to the memory area of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
