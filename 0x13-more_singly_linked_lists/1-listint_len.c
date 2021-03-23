#include "lists.h"

/**
 *listint_len - returns the number of elements
 *@h: pointer to elements
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
