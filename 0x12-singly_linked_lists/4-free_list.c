#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptrt;

	while ((ptrt = head) != NULL)
	{
		head = head->next;
		free(ptrt->str);
		free(ptrt);
	}
}
