#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table.
 * @ht: Hash Table.
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *c, *tmp;
	unsigned long int i;

	for (i = 0 ; i < ht->size ; ++i)
	{
		c = ht->array[i];

		while (c != NULL)
		{
			tmp = c;
			c = c->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
