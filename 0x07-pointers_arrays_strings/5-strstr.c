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
int l, m, n;

for (l = 0; haystack[l] != '\0'; l++)
{
for (n = l, m = 0; needle[m] != '\0'; m++, n++)
{
if (needle[m] != haystack[n] || haystack[n] == '\0')
{
break;
}
}
if (needle[m] == '\0')
{
return (haystack + l);
}
}
return (0);
}
