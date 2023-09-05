#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, for_write;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_RDWR);
	if (file == -1)
		return (-1);
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
		return (-1);
	return (1);
}


