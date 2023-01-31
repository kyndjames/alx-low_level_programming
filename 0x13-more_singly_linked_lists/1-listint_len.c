#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: pointer
 * Return: the number of elements in a linked listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t ptr = 0;

	while (h)
	{
		ptr++;
		h = h->next;
	}
	return (ptr);
}
