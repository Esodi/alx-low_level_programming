#include <stdio.h>
#include <stdlib.h>

/**
 * main - big function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int p = atoi(argv[1]);
	int q =	atoi(argv[2]);

	if (argc - 1 == 2)
		printf("%d\n", (p * q));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
