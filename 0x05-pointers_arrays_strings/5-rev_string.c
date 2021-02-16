#include "holberton.h"

/**
 *rev_string - reverses a string
 *@s: character to reverse
 *Return: nothing
 */
void rev_string(char *s)
{
int count;
int end;
while (*s != '\0')
{
s++;
count++;
}
for (end = count; end >= 0; end--)
{
--s;
}
}
