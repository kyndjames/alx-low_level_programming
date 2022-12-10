#include <stdio.h>
/**
 * main - Entry point to print sizes
 * code by kindness
 * Return: always 0 (success)
 *
 */
int main(void)
{
	printf("Size of a char: %lu byte(S)\n", sizeof(char));
	printf("Size of an int: %lu byte(S)\n", sizeof(int));
	printf("Size of a long int: %lu byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(S)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(S)\n", sizeof(float));
	return (0);

}
