#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: head pointer
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *del_node = NULL;
unsigned int i;

if (head == NULL || *head == NULL)/*empty list*/
return (-1);

/*deleting the first node*/
if (index == 0)
{
del_node = *head;
*head = del_node->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(del_node);
return (1);
}

del_node = *head;
if (del_node != NULL)
{
for (i = 0; i < index; i++)
del_node = del_node->next;
}
if (del_node == NULL)
{
return (-1);
}
del_node->prev->next = del_node->next;
if (del_node->next == NULL)
{
del_node->next->prev = del_node->prev;
}
free(del_node);
return (1);
}
