#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the anme of the file.
 * @text_content: the content.
 * Return: created file.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	char *memo;
	ssize_t b_rd, b_wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	memo = malloc(sizeof(char) * strlen(text_content) + 1);
	if (memo == NULL)
		return (-1);
	b_rd = read(file, memo, sizeof(memo));
	if (b_rd == -1)
	{
		free(memo);
		close(file);
		return (-1);
	}
	b_wr = write(STDOUT_FILENO, memo, b_rd);
	if (b_wr == -1)
	{
		free(memo);
		close(file);
		return (-1);
	}
	return (1);
}
