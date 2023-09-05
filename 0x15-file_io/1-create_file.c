#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: text content of the file.
 * Return: created file.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t for_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0644);
	if (file == -1)
	{
		return (-1);
	}
/*	for_read = read(file, text_content, sizeof(text_content));
	if (for_read == -1)
		return (-1);*/
	for_write = write(STDIN_FILENO, text_content, sizeof(text_content));
	if (for_write == -1)
		return (-1);
	close(file);
	return (0);
}

