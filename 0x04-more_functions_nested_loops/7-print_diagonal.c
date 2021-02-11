#include "holberton.h"
/**
 *print_diagonal - draw a diagonal in the terminal
 *@n: no. og times to print
 *Return: always 0
 */
void print_diagonal(int n)
{
int i = 0, j;
while (i < n && n > 0)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
return;
}
