#include "main.h"

/**
 * _strchr - locates char in a string
 * @s: the string to be searched.
 * @c: the char to be located.
 *
 * Return: If c is found return to first occurance
 * If c is not found NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		return (s + index);
	}
	return ('\0');
}
