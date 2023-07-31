#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *la;
	unsigned int cnr = 0;

	la = h;
	while (la)
	{
		cnr++;
		la = tp->next;
	}
	return (cnr);
}

