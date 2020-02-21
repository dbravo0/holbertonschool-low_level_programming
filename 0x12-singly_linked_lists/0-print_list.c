#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: Pointer to the linked list head
 *
 * Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
