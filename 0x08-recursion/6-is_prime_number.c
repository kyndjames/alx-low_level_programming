#include "main.h"
/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: prime number
 * Return: 1 if prime or else 0
 */
int is_prime_number(int n)
{
	if (n % 2 == 1 || (n == 2 && n != 1))
		return (1);
	else
		return (0);
	return (is_prime_number(n));
}
