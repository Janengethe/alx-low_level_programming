#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to head pointer of the list
 *@n: int to add to the new node
 *Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;

new_node = (listint_t *)malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
*head = new_node;

else
{
temp = *head;

while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
