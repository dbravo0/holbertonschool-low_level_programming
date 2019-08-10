#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Beginning of the linked list
 *
 * Return: Returns the head node’s data (n)
 **/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
