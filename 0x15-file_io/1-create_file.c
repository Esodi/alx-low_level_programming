#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file.
 * @text_content: text content of the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int for_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for_write = write(file, text_content, strlen(text_content));
		if (for_write == -1)
		{
			close(file);
			return (-1);
		}
	}

	if (close(file) == -1)
	{
		return (-1);
	}
	return (1);
}

