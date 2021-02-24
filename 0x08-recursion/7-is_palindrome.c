#include "holberton.h"

/**
 * _compare - compare head to look for match
 * @a: index starting from left of string
 * @b: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int _compare(char *a, char *b)
{
if (a >= b)
{
return (1);
}
else if (*a == *b)
{
return (_compare(a + 1, b - 1));
}
else
{
return (0);
}
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
if (*s == '\0')
return (0);
s++;
return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int i = _strlen(s);
return (_compare(s, (s + i - 1)));
}
