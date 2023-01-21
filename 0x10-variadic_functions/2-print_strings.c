#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: numbers of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int r;
	char *str;

	va_start(ap, n);
	for (r = 0; r < n; r++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("nil");
		if (r < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
