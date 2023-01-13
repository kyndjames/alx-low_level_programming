#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the variable
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *check;

	check = (unsigned int*) malloc(sizeof(unsigned int) * b);
	return (check);
}
