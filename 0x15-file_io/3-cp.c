#include "main.h"
#include <fcntl.h>

/**
 * copy - copies the content of a file to another file.
 * @file1: file_from.
 * @file2: file_to.
 * Return: 1 on success, 0 on failure
 */
int copy(const char *file1, const char *file2)
{
	char memo[1024];
	int thefile1, thefile2, for_write, for_read;

	thefile1 = open(file1, O_RDONLY);
	if (thefile1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file1);
		exit(98);
	}
	for_read = read(thefile1, memo, sizeof(memo));
	if (for_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", file1);
		exit(98);
	}
	thefile2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (thefile2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file2);
		exit(99);
	}
	for_write = write(thefile2, memo, for_read);
	if (for_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", file2);
		exit(99);
	}
	if (close(thefile1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", thefile1);
		exit(100);
	}
	if (close(thefile2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", thefile2);
		exit(100);
	}
	return (1);
}

/**
 * main - main function.
 * @parc: arg count.
 * @parv: arg vector.
 * Return: 0 success.
 */
int main(int parc, char **parv)
{
	int n;

	if (parc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	n = copy(parv[1], parv[2]);
	printf("%i\n", n);
	return (0);
}
