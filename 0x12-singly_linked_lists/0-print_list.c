#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t prt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		prt++;
		h = h->next;
	}
	return (prt);
}
