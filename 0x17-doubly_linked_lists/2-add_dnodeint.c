#include "lists.h"
/**
 * add_dnodeint - add node at beginning of doubly linked list
 * @head: head pointer
 * @n: data to add to new node
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

if (head == NULL)/*check if head is empty*/
return (NULL);

newnode = malloc(sizeof(struct dlistint_s));/*malloc new node*/
if (newnode == NULL)
return (NULL);

newnode->n = n;/*set data to new node*/
/*account for no list*/
if (*head == NULL)
{
*head = newnode;
newnode->next = NULL;
newnode->prev = NULL;
return (newnode);
}

/*account for linked list*/
newnode->next = *head;
newnode->prev = NULL;
(*head)->prev = newnode;
*head = newnode;
return (newnode);
}
