#include "variadic_functions.h"
#include <stdio.h>

/**
 *sum_them_all - sum total num pased in the arguments
 *@n: const unsgned int
 *
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = n; 1 == 1;)
	{
		i = va_arg(ap, int);
		if (i == 0)
			break;
		sum = sum + i;
	}
	va_end(ap);

	return (sum);
}
