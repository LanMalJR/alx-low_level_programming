#include "main.h"

/**
 **_memset - fill n by memeory area
 *@s: memeory area
 *@b: byte to fill
 *@n: number of b to be copied.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
