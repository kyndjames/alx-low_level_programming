#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 *
 * @b: second integer
 *
 * @c: third integer
 *
 * Return: largest number
 *
 */
int largest_number(int a, int b, int c)

{
	int largest;
	int a = 972, b = -98, c = 0;

	largest = largest_number(a, b, c);
	if (a > b && a > c)
	{
		printf("%3d is the largest number", a);
	}
	else if (b > a && b > c)
	{
		printf("%3d is the largest number", b);
	}
	else if (c > a && c > b)
	{
		printf("%3d is the largest number", c);
	}
	return (largest);
}
