#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end
 * @str : string
 * @head: pointer
 * Return: the address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptrt, *ptrt_new;
	size_t n;

	ptrt = malloc(sizeof(list_t));
	if (ptrt == NULL)
		return (NULL);
	ptrt->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	ptrt->len = n;
	ptrt->next = NULL;
	ptrt_new = *head;

	if (ptrt_new == NULL)
	{
		*head = ptrt;
	}
	else
	{
		while (ptrt_new->next != NULL)
			ptrt_new = ptrt_new->next;
		ptrt_new->next = ptrt;
	}
	return (*head);
}
