#include "lists.h"

/**
 * sum_dlistint - returns sum of doubly linked list
 * @head: head pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (!head)
return (sum);

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
