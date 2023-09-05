#include "main.h"

/** 
 * append_text_to_file - Appends the specified text at the
 * end of a file.
 * @filenm: Pointer to the name of the file.
 * @text_con: string to add to the end of the file.
 *
 * Return: If the function fails or if filename is NULL, it returns -1.
 */
int append_text_to_file(const char *filenm, char *text_con)
{
	int opn, wrt, len = 0;

	if (filenm == NULL)
		return (-1);

	if (text_con != NULL)
	{
		for (len = 0; text_con[len];)
			len++;
	}

	opn = open(filenm, O_WRONLY | O_APPEND);
	wrt = write(opn, text_con, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);
	return (1);
}
