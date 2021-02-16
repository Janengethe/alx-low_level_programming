#include "holberton.h"

/**
 *puts2 - prints the characters of a string
 *@str: character to print
 *Return: nothing
 */
void puts2(char *str)
{
while (*str != '\0')
{
_putchar (*str);
str += 2;
}
_putchar ('\n');
}
