#include "lists.h"

/**
 *free_listint - frees a linked list
 *@head: pointer to the list
 *Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *p;

if (head == NULL)/*account for no linked list*/
return;

while (head != NULL)/*p to keep track of head and free*/
{
p = head;
head = head->next;/*move to the next node while p frees prior*/
free(p);
}
}
