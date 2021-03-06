#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table you want to look into
 * @key: Key you are looking for
 *
 * Return: Value associated with the element or NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}

