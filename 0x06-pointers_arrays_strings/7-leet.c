#include "holberton.h"

/**
 *leet - encodes a string into 1337
 *@s: string
 *Letters a and A should be replaced by 4
 *Letters e and E should be replaced by 3
 *Letters o and O should be replaced by 0
 *Letters t and T should be replaced by 7
 *Letters l and L should be replaced by 1
 *Return: nothing
 */
char *leet(char *s)
{
int d[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int z[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

int i, j;
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; d[i] != '\0'; i++)
{
if (s[j] == d[i])
s[j] = z[i];
}
}
return (s);
}
