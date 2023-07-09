#include <stdio.h>

/**
*main - prints alphabet without e and q
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	i++;
	}
	putchar('\n');

	return (0);
}
