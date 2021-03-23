#include "lists.h"

/**
 *add_nodeint -add node at the beginning of the list
 *@head: pointer to head pointer of the list
 *@n: int to add to the node
 *Return: address of the new node3
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = (listint_t *)malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
