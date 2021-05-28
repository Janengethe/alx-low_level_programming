#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node, *temp;
unsigned long int indx;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (0);

indx = key_index((const unsigned char *)key, ht->size);

temp = ht->array[indx];

while (temp != NULL)
{
if (strcmp(key, temp->key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (1);
}
temp = temp->next;
}

node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (0);

node->key = strdup(key);
node->value = strdup(value);
node->next = ht->array[indx];
ht->array[indx] = node;

return (1);
}
