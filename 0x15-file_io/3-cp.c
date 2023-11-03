#include "main.h"

int cp(char *file_from, char *file_to)
{
	int file1, file2, cf;
	ssize_t b_rd, b_wr;
	char buffer[1024];

	file1 = open(file_from, O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", file_to);
		exit(99);
	}
	b_rd = 1024;
	while (b_rd == 1024)
	{
		b_rd = read(file1, buffer, sizeof(buffer));
		if (b_rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		b_wr = write(file2, buffer, b_rd);
		if (b_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (cf = close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (cf = close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (1);
}

int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (cp(av[1], av[2]));
}
