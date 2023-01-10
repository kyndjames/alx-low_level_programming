#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: the character parameter
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
	{
		if (arr == NULL)
		{
			return (NULL);
		}
		arr[i] = c;
	}
	return (arr);
}
