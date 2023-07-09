#include <stdio.h>

/**
*main - print hex
*
*Return: Always 0 (Success)
**/
int main(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	putchar(n);
	for (n = 'a' ; n <= 'f' ; n++)
	putchar(n);
	putchar('\n');

	return (0);
}
