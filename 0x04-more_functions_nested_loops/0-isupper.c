#include "holberton.h"
/**
 *_isupper - check for uppercase characters
 *@c: integer to print
 *Return: return 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
