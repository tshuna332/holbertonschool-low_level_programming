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

	buffer = (int **)malloc(height * sizeof(int*));

	for (i = 0; i < height; i++)
		buffer[i] = (int*)malloc(width * sizeof(int));

	/*We fill in the matrix*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}

	return (buffer);
}