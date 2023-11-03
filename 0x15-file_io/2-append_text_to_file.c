#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: NULL terminated string.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b_wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	b_wr = write(file, text_content, strlen(text_content));
	if (b_wr == -1)
		return (-1);
	close(file);

	return (1);
}

