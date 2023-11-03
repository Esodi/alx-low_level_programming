#include "main.h"

void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, "Error: ");
	dprintf(STDERR_FILENO, format, arg);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

int cp(char *file_from, char *file_to)
{
	int file1, file2, cf;
	ssize_t b_rd, b_wr;
	char buffer[1024];

	file1 = open(file_from, O_RDONLY);
	if (file1 == -1)
		print_error(98, "Can't read from file %s", file_from);
	file2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file2 == -1)
		print_error(99, "Can't write to %s", file_to);
	while (b_rd > 0)
	{
		b_rd = read(file1, buffer, sizeof(buffer));
		if (b_rd == -1)
			print_error(98, "Can't read from file %s", file_from);
		b_wr = write(file2, buffer, b_rd);
		if (b_wr == -1)
			print_error(99, "Can't write to file %s", file_to);
	}
	cf = close(file1);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	cf = close(file2);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
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
