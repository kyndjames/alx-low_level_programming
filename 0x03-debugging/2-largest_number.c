#include "main.h"



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

	a = 972;
	b = -98;
	c = 0;
	largest = largest_number(a, b, c);
	if (a > b && b > c)
	{
		printf("%d is the largest number", a);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number", b);
	}
	else if (c > b && b > a)
	{
		printf("%d is the largest number", c);
	}
	return (largest);
}
