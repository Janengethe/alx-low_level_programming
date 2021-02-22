#include "holberton.h"

/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: substring
 *Return: a  pointer to beginning of located substring,
 *or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++) /* iterate through string */
{
for (j = 0; needle[j] != '\0'; j++) /* iterate through needle */
{
if (haystack[i] == needle[0]) /*  if a byte matches the first char of needle */
{
return (needle);
}
}
}
return (needle);
}
