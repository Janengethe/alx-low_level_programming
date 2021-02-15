#include "holberton.h"

/**
 *_puts - prints a srting folloerd by \n to stdout
 *@str: character to print
 *Return: nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar ('\n');
}
