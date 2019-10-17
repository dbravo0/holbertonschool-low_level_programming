#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table you want to add or update the key/value to
 * @key: Can not be an empty string
 * @value: Must be duplicated. Value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *hash_node, *c;
	unsigned long int hash_index;

	if (!ht || !key || !value)
		return (0);

	hash_index = key_index((const unsigned char *)key, ht->size);

	c = ht->array[hash_index];

	while (c)
	{
		if (strcmp(c->key, key) == 0)
		{
			free(c->value);
			c->value = strdup(value);

			if (!c->value)
				return (0);

			return (1);
		}
		c = c->next;
	}

	hash_node = malloc(sizeof(hash_node_t));

	if (!hash_node)
		return (0);

	hash_node->next = NULL;
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);

	if (ht->array[hash_index] != NULL)
		hash_node->next = ht->array[hash_index];

	ht->array[hash_index] = hash_node;
	return (1);
}
