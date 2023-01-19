#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: parameter variable
 * Return: 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	int sum = 0;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		sum = sum + va_arg(ap, const  unsigned int);
	}
	va_end(ap);
	return (sum);
}
