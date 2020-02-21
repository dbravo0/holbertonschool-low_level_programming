#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Pointer of elements
 *
 * Return: Always 0.
 **/
size_t list_len(const list_t *h)
{

	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);

}
