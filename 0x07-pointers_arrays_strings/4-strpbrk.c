#include "holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *locates the first occurrence in the string s of
 *any of the bytes in the string accept
 *@s: string
 *@accept: string
 *Return: pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++) /* iterate through string */
{
for (j = 0; accept[j] != '\0'; j++) /* iterate through target string */
{
if (s[i] == accept[j]) /* look for matches */
{
s = &s[i]; /* set pointer to first occurence */
return (s);
}
}
}
return (NULL); /* no matches */
}
