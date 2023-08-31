/**
 * binary_to_uint - converts a binary number to unsigned int
 * @bn: binary number contained in the string
 *
 * Return: The converted unsigned int, or 0 if input is invalid.
 */
unsigned int binary_to_uint(const char *bn)
{
	unsigned int dc_vl = 0;
	int i = 0;

	if (!bn)
        return 0;

    for (i = 0; bn[i]; i++)
    {
        if (bn[i] < '0' || bn[i] > '1')
        {
            return (0);
		dc_vl = 2 * dc_vl + (bn[i] - '0');
        }
        else
        {
            return 0;
        }
    }

    return dc_vl;
}
