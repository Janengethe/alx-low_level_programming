#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: data for new node
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node, *temp;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
temp = *head;
while (i < (idx - 1))
{
temp = temp->next;
i++;

if (temp == NULL)
{
free(new_node);
return (NULL);
}
}
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
