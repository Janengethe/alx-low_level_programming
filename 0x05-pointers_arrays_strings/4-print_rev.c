#include "holberton.h"

/**
 *print_rev - prints a srting in reverse
 *@s: character to print
 *Return: nothing
 */
void print_rev(char *s)
{
int count;
int end;
while (*s != '\0')
{
count++;
s++;
}
for (end = count; end >= 0; end--)
{
_putchar (*s);
s--;
}
_putchar ('\n');
}
