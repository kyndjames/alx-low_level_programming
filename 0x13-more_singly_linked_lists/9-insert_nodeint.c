#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the node
 * @idx: index to the node
 * @n: integer values
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *ptr2 = *head;
	unsigned int node;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;

	if (idx == 0)
	{
		ptr1->next = ptr2;
		*head = ptr1;
			return (ptr1);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr2 == NULL || ptr2->next == NULL)
			return (NULL);

		ptr2 = ptr2->next;
	}
	ptr1->next = ptr2->next;
	ptr2->next = ptr1;
	return (ptr1);
}
