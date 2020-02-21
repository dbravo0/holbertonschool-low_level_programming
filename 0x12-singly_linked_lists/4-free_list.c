#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: pointer to the first node element of the list
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
