#include "main.h"

/**
 * create_file - reates a file with the specified name
 * and writes the given text content to it.
 * @filenm - A pointer to the name of the file to create.
 * @text_con - A pointer to a string to write to the file.
 *
 * Return: If the function fails, it returns -1.
 */
int create_file(const char *filenm, char *text_con)
{
	int rdc, wrt, len = 0;

	if (filenm == NULL)
		return (-1);

	if (text_con != NULL)
	{
		for (len = 0; text_con[len];)
			len++;
	}

	rdc = open(filenm, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(rdc, text_con, len);

	if (rdc == -1 || wrt == -1)
		return (-1);

	close (rdc);
	return (1);
}
