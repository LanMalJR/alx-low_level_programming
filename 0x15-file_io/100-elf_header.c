#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;
	int i;

	fd = open(argv[1], O_RDONLY);
	
	if (argc != 2) 
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 1;
	}

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		return 98;
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error reading file: %s\n", strerror(errno));
		close(fd);
		return 98;
	}

	/* Display the information from the ELF header */
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
		printf("ELF32\n");
		break;
		case ELFCLASS64:
		printf("ELF64\n");
		break;
		default:
		printf("<unknown>\n");
	}
	/* Display the rest of the information from the ELF header */

	close(fd);
	return 0;
}
