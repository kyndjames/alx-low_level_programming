#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the next node
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int del;

	if (*head == NULL)
		return (0);

	ptr = *head;
	del = (*head)->n;

	*head = (*head)->next;
	free(ptr);

	return (del);
}
