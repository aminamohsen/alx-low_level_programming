#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *as, *as2;

	as = head;
	while (as != NULL)
	{
		as2 = as->next;
		free(as);
		as = as2;
	}
}

