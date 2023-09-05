#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: letters.
 * Return: text from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t l = 0;
	ssize_t for_read;
	ssize_t for_write;
	char memo[1024];
	
	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY, 0644);
	if (fp == -1)
		return (0);
	while (letters > 0)
	{
		for_read = read(fp, memo, sizeof(memo));
		if (for_read <= 0)
			break;

		for_write = write(STDOUT_FILENO, memo, for_read);
		if (for_write== -1)
		{
			close(fp);
			return (0);
		}

		letters = letters - for_write;
		l = l + for_write;
	}
	close(fp);
	return (l);
}
