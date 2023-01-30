#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - that adds a new node at the beginning of a listint_t
 * @head: pointer to the node
 * @n: integer parameter for the new node
 * Return: null if function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptrnew;

	ptrnew = malloc(sizeof(listint_t));
	if (ptrnew == NULL)
		return (NULL);
	ptrnew->n = n;
	ptrnew->next = *head;

	*head = ptrnew;

	return (ptrnew);
}
