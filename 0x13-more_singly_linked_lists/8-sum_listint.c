#include "lists.h"

/**
 *sum_listint - returns the sum of all data in the list
 *@head: head pointer
 *Return: sum of all data in the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
