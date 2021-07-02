#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;
	hash_node_t **array;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	ht->size = size;
	ht->array = array;

	return (ht);
}
