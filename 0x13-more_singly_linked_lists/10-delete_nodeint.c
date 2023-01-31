#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: pointer to the node
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1, *ptr2 = *head;
	unsigned int node;

	if (ptr2 == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (ptr2->next == NULL)
			return (-1);
		ptr2 = ptr2->next;
	}
	ptr1 = ptr2->next;
	ptr2->next = ptr1->next;
	free(ptr1);
	return (1);
}
