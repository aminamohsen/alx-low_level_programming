#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *op;
	int my_data;

	if (*head == NULL)
		return (0);

	op = *head;
	*head = op->next;
	my_data = op->n;
	free(op);
	return (my_data);
}

