#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Beginning of the linked list
 * @n: Sizes of node
 *
 * Return: Address of th enew element, or NULL it if failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tail = *head;

	if (*head == NULL)
		*head = new;

	else
	{
		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
	}

	return (*head);
}
