#include "holberton.h"

/**
 *_strcmp - compares strings
 *@s1: string character
 *@s2: string character
 *Return: a pointer to string
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
i++;
}
return (0);
}
