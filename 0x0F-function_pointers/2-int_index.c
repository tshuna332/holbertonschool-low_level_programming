#include "function_pointers.h"

/**
 *int_index - call the function and return the return
 *@array: The array
 *@size: The size
 *@cmp: The functionsr
 *
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);
		if (ret)
			return (i);
	}

	return (-1);
}
