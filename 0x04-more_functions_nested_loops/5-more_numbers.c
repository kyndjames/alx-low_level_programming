#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
		_putchar(i);
		i++;
		}
	_putchar('\n');
	j++;
	}
	return (0);
}
