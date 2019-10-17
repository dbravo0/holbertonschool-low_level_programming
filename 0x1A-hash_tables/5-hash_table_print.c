#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash Table
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i, j = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (j == 0)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else if (j == 1)
				printf(", '%s': '%s'", tmp->key, tmp->value);

			j = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
