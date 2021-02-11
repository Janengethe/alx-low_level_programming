#include "holberton.h"
/**
 *print_line - to print line in the terminal
 *@n: no. of times to print
 *Return: always 0
 */
void print_line(int n)
{
int i = 0;
while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
