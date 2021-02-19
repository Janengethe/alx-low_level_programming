#include "holberton.h"

/**
 *_strncat - concatenates two strings not null-terminated
 *@dest: string
 *@src: string
 *@n: ineger to use
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
j = 0;
while (src[j] != src[n])
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
