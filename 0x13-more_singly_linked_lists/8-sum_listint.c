#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Beginning of the linked list
 *
 * Return: Returns 0 if the list is empty
 **/
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
