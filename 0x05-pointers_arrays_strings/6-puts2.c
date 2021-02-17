#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

/**
 *puts2 - prints the characters of a string
 *@str: character to print
 *Return: nothing
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar (str[i]);
i += 2;
}
_putchar ('\n');
}
