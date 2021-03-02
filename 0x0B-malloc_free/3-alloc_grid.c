#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - create a matrix
 *@width: columnas
 *@height: filas
 *
 *Return: matriz int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **buffer;

	if (width <= 0 || height <= 0)
		return (NULL);

	buffer = malloc(sizeof(int *) * height);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		buffer[i] = malloc(sizeof(int) * width);
		if (buffer[i] == NULL)
		{
			for (i = i - i; i >= 0; i--)
				free(buffer[i]);
			free(buffer);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			buffer[i][j] = 0;
	}

	return (buffer);
}
