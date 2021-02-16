#include "holberton.h"

/**
 * _strcpy - copy strings pointed to
 * @dest: end pointer
 * @src: begin pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; *(src + i) != '\0'; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
_putchar('\n');
}
