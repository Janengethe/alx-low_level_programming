#include "lists.h"

/**
 *print_listint - prints all the elements of a list
 *@h:pointer to elements
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t node_num = 0;
while (h != NULL)
{
printf("%d\n", h->n);
node_num++;
h = h->next;
}
return (node_num);
}
