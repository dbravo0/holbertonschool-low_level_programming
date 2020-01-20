#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = calloc(sizeof(hash_table_t), 1);

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(sizeof(hash_node_t *), size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
