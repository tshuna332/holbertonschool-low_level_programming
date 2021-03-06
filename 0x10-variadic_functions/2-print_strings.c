#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - print the strings separeit for the sep
 *@separator: char *
 *@n: const unsgned int
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i, len;
	char *x;

	len = n;

	va_start(ap, n);
	for (i = 0; i < len; i++)
	{
		x = va_arg(ap, char*);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (i != (len - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
