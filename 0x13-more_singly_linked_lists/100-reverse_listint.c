#include "lists.h"

/**
 * reverse_listint - Function that reverses a list
 * @head: Beginning of the linked list
 *
 * Return: A pointer to a first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (NULL);

	p = *head;
	n = (*head)->next;
	*head = (*head)->next;
	p->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		n->next = p;
		p = n;
		n = *head;
	}

	*head = p;

	return (*head);
}
