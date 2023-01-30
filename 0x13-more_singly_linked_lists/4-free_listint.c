#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to the new node
 * Return: null
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
