#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: initial segment
 *@accept: bytes
 *Return: no of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
return (count);
}
}
return (count);
}
