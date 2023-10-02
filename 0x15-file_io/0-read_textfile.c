#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read and print text from a file to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of letters (bytes) to read and print.
 *
 * Return: Number of bytes successfully read and printed to 
 * STDOUT.
 *         0 when the function fails or when `filename` is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t bytes_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}
