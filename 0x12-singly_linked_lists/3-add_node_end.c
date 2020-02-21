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
	list_t *new;
	size_t tmp = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[tmp])
		tmp++;
	new->len = tmp;
	new->next = *head;
	*head = new;

	return (*head);

}
