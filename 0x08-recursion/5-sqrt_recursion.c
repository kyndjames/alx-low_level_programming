#include "main.h"

int _sqr_t(int n, int i);

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: numer to be sqrtd
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	return (_sqr_t(n, 1));
}

/**
 * _sqr_t - ffind square root of a number
 * @n: the number to find the root
 * @i: the iterator
 * Return: squareroot
 */
int _sqr_t(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqr_t(n, i + 1));
}
