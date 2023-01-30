#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t
 * @head: pointer to the next node
 * @n: integer values of rhe node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1, *ptr2;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL)
		return (NULL);

	ptr1->n = n;
	ptr1->next = NULL;

	if (*head == NULL)
		*head = ptr1;
	else
	{
		ptr2 = *head;
		while (ptr2->next != NULL)
			ptr2 = ptr2->next;
		ptr2->next = ptr1;
	}
	return (*head);
}
