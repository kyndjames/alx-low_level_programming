#include <stdio.h>
/**
 *main - Entry point
 *
 *  Return: 0
 *
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (ones = '0'; ones <= '8'; ones++)
	{
		for (tens = '1'; tens <= '9'; tens++)
		{
			if ((!(ones == tens) || (tens > ones)))
			{
				putchar(ones);
				putchar(tens);
				if ((ones == 9 && tens == 8))
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
