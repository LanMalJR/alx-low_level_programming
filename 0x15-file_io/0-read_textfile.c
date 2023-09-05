#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a specified number of letters from
 * a text file and prints them to STDOUT.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters (characters) to be read and printed.
 * Return: The actual number of bytes (characters) read and printed to STDOUT.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t wrt;
	ssize_t rd;
	ssize_t rdc;

	rdc =  open(filename, O_RDONLY);
	if (rdc == -1)
		return (0);

	buffr = malloc(sizeof(char) * letters);
	rd = read(rdc, buffr, letters);
	wrt = write(STDOUT_FILENO, buffr, rd);

	free(buffr);
	close(rdc);
	return (wrt);
}

