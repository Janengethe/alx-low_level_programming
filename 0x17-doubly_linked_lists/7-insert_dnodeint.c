#include "lists.h"

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: head pointer
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *new_node;
unsigned int i;

if (h == NULL)/*empty head*/
return (NULL);

if (idx == 0)/*add node at beginning of list*/
return (add_dnodeint(h, n));

temp = *h;
/*traverse the list*/
if (temp != NULL)
{
for (i = 0; i < idx; i++)
temp = temp->next;
}

if (temp == NULL && i == idx)/*end of the list*/
return (add_dnodeint_end(h, n));/*add node at end*/

else if (temp != NULL)
{
new_node = malloc(sizeof(dlistint_t));/*malloc new node*/

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;/*store data at new node*/
new_node->next = temp;
temp->prev->next = new_node;
new_node->prev = temp->prev;
temp->prev = new_node;

return (new_node);
}
return (NULL);
}
