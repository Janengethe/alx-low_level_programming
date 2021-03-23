#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head pointer of the list
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *p;

if (head == NULL) /* account for no linked list */
return;

while (*head != NULL) /* have p keep track of head node and free */
{
p = *head;
*head = p->next; /* move to next node while p frees prior */
free(p);
}
}
