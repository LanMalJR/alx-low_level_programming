#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_puts('\n');
			break;
		}
		_puts(str[count]);
		count++;
	}
}
