#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - to print values zero-positive_or_negative
 * Return: 0
 */
int main(void)

{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("%ld is positive");
	}
else if (n < 0)
{printf("%lu is negative");
	}
else
{printf("%d is zero");
	}
	return (0);

}
