#include "holberton.h"
/**
 *_isalpha - check for alphabet
 *Return: return 1 if lowercase or uppercase and 0 if otherwise
 *@c: character to print
 */
int _isalpha(int c)
{
if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
