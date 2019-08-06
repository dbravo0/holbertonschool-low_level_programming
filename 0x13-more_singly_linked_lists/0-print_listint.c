#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: ...
 *
 **/
size_t print_listint(const listint_t *h)
{
	int c;

	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		return (listint_t->n);
	}
	return (0);

}
