#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Beginning of the liked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
