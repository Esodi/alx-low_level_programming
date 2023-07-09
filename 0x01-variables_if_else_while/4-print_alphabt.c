#include <stdio.h>

/**
*main - prints alphabet without e and q
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char n[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i <= 26)
	{
		if (n[i] != 'e' && n[i] != 'q')
		{
			putchar(n[i]);
		}
	i++;
	}
	putchar('\n');

	return (0);
}
