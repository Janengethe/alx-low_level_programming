#include "lists.h"

/**
 *pop_listint - deletes the head node of a list
 *@head: pointer
 *Return: deleted head node data
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *temp;

if (*head == NULL)
return (0);

temp = *head;
i = temp->n;
*head = temp->next;
free(temp);
return (i);
}
