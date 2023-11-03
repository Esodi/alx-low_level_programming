#include "main.h"

int cp(char *file_from, char *file_to)
{
	int file1, file2;
	ssize_t b_rd, b_wr;
	char buffer[1024];

	if (file_from == NULL)
		exit(98);
	if (file_to == NULL)
		exit(99);
	file1 = open(file_from, O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(99);
	}
	b_rd = read(file1, buffer, sizeof(buffer));
	if (b_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	b_wr = write(file2, buffer, b_rd);
	if (b_wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(99);
	}
	if (close(file1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	return (1);
}

int main(int ac, char *av[])
{
	if (ac < 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(av[1], av[2]);

	return (0);
}
