#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *current2;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	current2 = *head;
	while (current2->next)
		current2 = current2->next;
	current2->next = current;
	return (temp);
}

