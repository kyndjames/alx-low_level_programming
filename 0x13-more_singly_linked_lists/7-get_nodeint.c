#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked
 * @head: pointer to the next node
 * @index: the index of the node
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
