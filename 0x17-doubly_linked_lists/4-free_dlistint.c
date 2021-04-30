#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)/*empty head return nothing*/
return;

while (head && head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
