#include "main.h"

/**
*_isdigit - check 4 digit
*@c: digit nu or char
*Return: Always 0.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
