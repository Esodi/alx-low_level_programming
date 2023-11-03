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
	ssize_t b_wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	b_wr = write(file, text_content, strlen(text_content));
	if (b_wr == -1)
	{
		close(file);
		return (-1);
	}
	return (1);
}
