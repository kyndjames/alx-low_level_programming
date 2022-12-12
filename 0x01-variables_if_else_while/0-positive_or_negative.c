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
{printf("%d is positive", rand () % 50);
	}
else if (n < 0)
{printf("%d is negative", rand () % 50);
	}
else
{printf("%d is zero", rand () % 50);
	}
	return (0);

}
