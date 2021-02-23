#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer.
 * @needle: character.
 * Return: Pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
/* iterate through haystack */
{
for (k = i, j = 0; needle[j] != '\0'; j++, k++)
{
if (needle[j] != haystack[k] || haystack[k] == '\0')
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (0);
}
