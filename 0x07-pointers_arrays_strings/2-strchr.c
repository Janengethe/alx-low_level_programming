#include "holberton.h"

/**
 *_strchr - locates a character in a string
 *@s: string
 *@c: character to check
 *Return: pointer to first occurrence of c in string s,
 *or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
s++;
return ((*s == c) ? (char *) s : NULL);
}
