#include "lists.h"

/**
 * dlistint_len - returns no of elements
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count += 1;
}

return (count);
}
