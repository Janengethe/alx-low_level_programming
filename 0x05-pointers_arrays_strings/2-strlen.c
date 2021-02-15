#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: character to use
 *Return: length of string
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
s++;
count++;
}
return (count);
}
