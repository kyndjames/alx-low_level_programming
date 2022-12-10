#include <stdio.h>
/**
 * main - Entry point to print sizes
 *
 * Return: 0
 *
 */
int main(void)
{
	char c;
	int a;
	long int b;
	long long int e;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)(sizeof(c));
	printf("size of an int: %lu byte(s)\n", (unsigned long)(sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)(sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)(sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)(sizeof(f));
	return (0);
}
