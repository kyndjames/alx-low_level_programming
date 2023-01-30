#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer to the node
 * Return: 0  if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
