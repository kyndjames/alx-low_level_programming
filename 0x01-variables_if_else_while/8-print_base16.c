#include <stdio.h>
/**
 * main - Entry point
 *
 *  Return: 0
 *
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	while (d < 10)
	{
	putchar(d + '0');
	d++;
	}
	while (c <= 'a')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
