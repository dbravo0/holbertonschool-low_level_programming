#include "lists.h"

/**
 * free_listint2 - Ffrees a listint_t list
 * @head: Beginning of the linked list
 **/
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	while (head != NULL && *head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
}
