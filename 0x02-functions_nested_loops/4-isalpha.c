#include "main.h"

/**
 * _isalpha - check for alphabetic characters
 *@c: integer variable
 * Return: 1 for alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
