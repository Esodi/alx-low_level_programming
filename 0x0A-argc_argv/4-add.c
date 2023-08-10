#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - bigest funct
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = argc - 1; i > 0; i--)
	{
		printf("%d\n", atoi(argv[i]) + atoi(argv[argc--]));
	}
	return (0);
}
