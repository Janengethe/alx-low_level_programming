#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num_node = 0;

while (h)
{
printf("%d\n", h->n);
num_node++;
h = h->next;
}
return (num_node);
}
