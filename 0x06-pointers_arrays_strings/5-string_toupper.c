#include "holberton.h"

/**
 *string_toupper - changes all lowercase in string to uppercase
 *@s: pointer to string
 *Return: nothing
 */
char *string_toupper(char *s)
{
int i;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
i++;
}
return (s);
}
