#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int indx;
hash_node_t *temp;

if (!ht || !key)
return (NULL);

indx = key_index((const unsigned char *)key, ht->size);

temp = (ht->array)[indx];

while (temp != NULL && strcmp(temp->key, key) != 0)
temp = temp->next;

if (!temp)
return (NULL);

else
return (temp->value);
}
