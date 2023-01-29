#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: list
 * Return: returns the number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
