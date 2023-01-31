#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the new node
 * Return: The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr1, *ptr2 = *head;

	while (ptr2)
	{
		ptr1 = ptr2->next;
		free(ptr2);
		ptr2 = ptr1;
	}

	*head = NULL;
}
