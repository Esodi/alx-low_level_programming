#include "main.h"

/**
*_isupper - print upper letters
*
*@c: int var
*Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
