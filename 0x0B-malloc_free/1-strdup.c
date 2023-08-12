#include "main.h"

/**
 * _strdup - duplicates string
 * @str: string itself
 * Return: 0 (Success)
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup = malloc((len  + 1) * sizeof(char));
	if (str != NULL)
	{
		strcpy(dup, str);
	}
	return (dup);
}

