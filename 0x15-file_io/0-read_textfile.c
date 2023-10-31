#include "main.h"

/**
 * read_textfile - readstext file and prints it to the POSIX standard output.
 * @filename: the filename.
 * @letters: letters.
 * Return: printed text.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *memo;
	ssize_t b_wr, b_rd;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	memo = malloc(sizeof(char) * letters);
	if (memo == NULL)
	{
		close(file);
		return (0);
	}
	b_rd = read(file, memo, letters);
	if (b_rd == -1)
	{
		free(memo);
		close(file);
		return (0);
	}
	b_wr = write(STDOUT_FILENO, memo, b_rd);
	if (b_wr == -1)
	{
		free(memo);
		close(file);
		return (0);
	}
	free(memo);
	close(file);

	return (b_wr);
}
