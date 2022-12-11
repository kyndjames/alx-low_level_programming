#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)

{
	int n;
	scanf("%d", &n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
	printf("n is positive");
	}
	else if (n < 0) {
	printf("n is negative");
	}
	else {
	printf("n is zero");
	}
	return (0);

}
