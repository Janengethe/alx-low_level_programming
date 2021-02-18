#include "holberton.h"

/**
 *cap_string - capitalizes letters in string
 *@s: string
 *Return: nothing
 */
char *cap_string(char *s)
{
int i;
/* capitalize first character of the string */
for (i = 0; s[i] != '\0'; i++)
{
/* check first character is lowercase alphabet */
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] -= 32; /* subtract to make it cap */
continue;
}
if (s[i] == ' ')/* check space */
{
/* if space is found, check next character */
++i;
/* check next character is lowercase alphabet */
if (s[i] >= 'a' && s [i] <= 'z')
{
s[i] -= 32; /* make it capital */
continue;
}
}
else
{
/* all other uppercase characters should be in lowercase */
if (s[i] >= 'A' && s[i] <= 'Z')
s[i] += 32; /* add to make lowercase */
}
}
return (0);
}
