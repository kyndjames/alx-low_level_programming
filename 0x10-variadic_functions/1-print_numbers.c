#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n:  the number of integers passed to the function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int h;

	va_start(ap, n);
	for (h = 0; h < n; h++)
	{
		printf("%d", va_arg(ap, int));
	if (h != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
