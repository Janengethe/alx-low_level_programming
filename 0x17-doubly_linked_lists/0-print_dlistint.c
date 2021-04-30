#include "lists.h"

/**
 * print_dlistint - prints elements of doubly linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodenum = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodenum += 1;
}
return (nodenum);
}
