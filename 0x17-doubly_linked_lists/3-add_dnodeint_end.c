#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: head pointer
 * @n: data to add to new node
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *lastnode;

if (head == NULL)
return (NULL);

newnode = malloc(sizeof(struct dlistint_s));/*malloc newnode*/
if (newnode == NULL)
return (NULL);

newnode->n = n;/*set data to newnode*/
/*acount for no list*/
if (*head == NULL)
{
*head = newnode;
newnode->next = NULL;
newnode->prev = NULL;
return (newnode);
}

/*else account for linked list*/
lastnode = *head;
while (lastnode->next != NULL)/*traverse to last node*/
{
lastnode = lastnode->next;
}
newnode->next = NULL;
newnode->prev = lastnode;
lastnode->next = newnode;
return (newnode);
}
