#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Beginning of the linked list
 * @index: The index of the node, starting at 0
 *
 * Return: NULL if the node does not exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	tmp = head;

	for (i = 0 ; i < index ; i++)
	{
		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}

	return (tmp);
}
