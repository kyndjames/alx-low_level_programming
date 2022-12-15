#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: rgument
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)

	n = -n
	x = n % 10;
	_putcha(x + '0');
	return (x);
}
