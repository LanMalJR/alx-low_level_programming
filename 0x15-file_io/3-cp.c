#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void error(const char *msg) 
{
	fprintf(stderr, "%s\n", msg);
	exit(1);
}

int main(int argc, char *argv[]) 
{
	char *file_from;
	char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	/* Check if the number of arguments is correct */
	if (argc != 3) 
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	/* Open the source file in read-only mode */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* Open the destination file in write-only mode, create if it doesn't exist, and truncate if it does */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1) 
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	/* Read from source file and write to destination file until there is no more data to read */
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) 
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1) 
		{
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_read == -1) 
	{
		close(fd_from);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	/* Close the file descriptors */
	if (close(fd_from) == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return 0;
}
