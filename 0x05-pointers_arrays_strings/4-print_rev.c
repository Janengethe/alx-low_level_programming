#include "holberton.h"

/**
 *print_rev - prints a srting in reverse
 *@s: character to print
 *Return: nothing
 */
void print_rev(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
for (count = count; count >= 0; count--)
{
_putchar (*s);
s--;
}
_putchar ('\n');
}
