#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The value to index
 * @size: Size of the hash table
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}


