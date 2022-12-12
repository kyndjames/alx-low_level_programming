#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
