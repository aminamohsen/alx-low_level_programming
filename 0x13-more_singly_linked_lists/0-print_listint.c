#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *mt;
	unsigned int cntr = 0;

mt = h;
	while (mt)
	{
		printf("%d\n", mt->n);
		cntr++;
		mt = mt->next;
	}
	return (cntr);
}

