#include "lists.h"

/**
 * get_dnodeint_at_index - get node at n index
 * @head: head pointer
 * @index: index
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
if (!head)
return (NULL);

while (index && head->next)/*tranverse*/
{
head = head->next;
index -= 1;
}

if (index == 0)
{
return (head);
}
return (NULL);
}
