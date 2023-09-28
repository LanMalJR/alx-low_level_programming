/**
 * clear_bit - Sets the value of a specified bit to 0 in a given 
 * number.
 * @num: Pointer to the number to modify.
 * @indx: Index of the bit to clear (0-based).
 *
 * Return: 1 for success, -1 for failure (if the index is out of 
 * range.
 */
int clear_bit(unsigned long int *num, unsigned int indx)
{
	if (indx > 63)
		return (-1);

	*num = (~(1UL << indx) & *num);

	return (1);
}
