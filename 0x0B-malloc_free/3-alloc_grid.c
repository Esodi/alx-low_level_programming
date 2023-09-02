#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array.
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, w, h;

	ptr = malloc((width * height) * sizeof(int));
	h = 0;
	while (h < 0)
	{
		w = 0;
		while (w < 0)
		{
			ptr[width][height] = ptr[w][h];
			width--;
			height--;
			w++;
		}
		h++;
	}
	return (ptr);
}
		
