#include "main.h"

/**
 * _isupper - Check if the letter is upper
 * @i: The num is checked
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _isupper(int i)
{
if ((i >= 'A') && (i <= 'Z'))
return (1);

return (0);
}
