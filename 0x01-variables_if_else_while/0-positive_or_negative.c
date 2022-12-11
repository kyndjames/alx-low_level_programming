#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - to print values zero-positive_or_negative
 */
int main(void)

{
	int n;
	time 
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
	printf("%d is positive");
	}
	else if (n < 0) {
	printf("%d is negative");
	}
	else {
	printf("%d is zero");
	}
	return (0);

}
