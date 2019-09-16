#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Header of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);

	for (n = 0 ;  ; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n);
}
