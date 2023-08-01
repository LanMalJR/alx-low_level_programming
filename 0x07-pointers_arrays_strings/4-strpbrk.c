#include "main.h"

/**
 * _strpbrk - searching a string for aset of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched
 *
 * Return: match a set to a point byte to be matched
 * no set is matched - NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
