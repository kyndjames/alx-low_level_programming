#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: is a pointer to the function you need to use
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
