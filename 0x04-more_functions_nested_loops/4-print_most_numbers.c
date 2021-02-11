#include "holberton.h"

/**
 *print_most_numbers - print numbers from 0-9 except 2 and 4
 *Return: alays 0
 */
void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
_putchar (i);
}
_putchar ('\n');
return;
}
