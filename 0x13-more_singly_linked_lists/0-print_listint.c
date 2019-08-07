#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Sizes of nodes
 *
 * return: Number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	int c;

	for (c = 0 ; h != NULL ; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (c);
}
