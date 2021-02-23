#include "holberton.h"
#define NULL 0

/**
 *_strstr - locates a substring
 *@haystack: main string
 *@needle: substring
 *Return: a  pointer to beginning of located substring,
 *or NULL if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, x;
if (needle[0] == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++) /* iterate through haystack */
{
/* if a byte matches first char of needle */
/* interate through needle until match ends */
if (haystack[i] == needle[0])
{
x = i;
j = 0;
while (needle[j] != '\0')
{
if (haystack[x] == needle[j])
x++;
j++;
else
break;
} /* if matched throughout, return haystack */
if (needle[j] == '\0')
{
return (haystack + i);
}
}
}
return (NULL); /* No match */
}
