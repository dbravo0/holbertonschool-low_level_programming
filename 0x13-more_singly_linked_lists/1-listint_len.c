#include "lists.h"

/**
* listint_len - Returns the number of elements in a linked listint_t list
* @h: Sizes of nodes
*
* Return: Number of elements in the linked list
**/
size_t listint_len(const listint_t *h)
{
	int c;

	for (c = 0 ; h != NULL ; c++)
		h = h->next;

	return (c);
}
