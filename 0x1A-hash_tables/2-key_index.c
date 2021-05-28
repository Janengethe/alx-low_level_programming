#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: array size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int indx;

if (size == 0)
return (0);

indx = hash_djb2(key) % size;
return (indx);
}
