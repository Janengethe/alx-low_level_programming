#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: linked list
 *Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h)
{
if (h->str == NULL)
return (0);
else
count++;
h = h->next;
}
return (count);
}
