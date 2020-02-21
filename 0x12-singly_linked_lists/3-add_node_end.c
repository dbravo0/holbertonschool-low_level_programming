#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Beginning node of the list
 * @str: String for use as storage
 *
 * Return: The address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);

	while (str[i])
		i++;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);

}
