#include "main.h"
/**
 * print_alphabet_x10 -> lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
		_putchar('\n');
	}
}
