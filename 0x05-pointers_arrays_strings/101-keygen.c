#include "holberton.h"

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
int i;
int j = 0;
for (i = 0; s[i] != '\0'; i++)
{
j += 1;
}
return (j);
}
