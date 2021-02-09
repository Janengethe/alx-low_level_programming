#include "holberton.h"
/**
 *_islower - check for lowercase characters
 *Return: return 1 if lowercase and 0 else otherwise
 *@c: the character tp print
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
