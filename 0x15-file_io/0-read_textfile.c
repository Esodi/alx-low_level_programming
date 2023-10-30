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
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC);
	if (file == -1)
	{
		perror("open");
		return (0);
	}
	memo = malloc(letters);
	b_rd = read(file, memo, letters);
	if (b_rd == -1)
	{
		perror("read");
		free(memo);
		return (0);
	}
	b_wr = write(STDOUT_FILENO, memo, b_rd);
	if (b_wr == -1)
	{
		perror("write");
		free(memo);
		return (0);
	}
	free(memo);
	close(file);

	return (b_wr);
}
