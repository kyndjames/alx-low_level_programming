#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z');
	if ((ch != 'e') && (ch != 'q'))
	{
	putchar(ch);
	}
	else
	{
	ch++;
	}
	putchar('\n');
	return (0);
}
