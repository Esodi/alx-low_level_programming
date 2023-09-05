#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer.
 * @n: int number.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	n--;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		n--;
		i++;
	}
}
