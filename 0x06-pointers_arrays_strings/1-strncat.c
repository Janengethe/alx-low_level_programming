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
{
i++;
}

for (j = 0 ; j < n && src[j] != '\0' ; j++)
dest[i + j] = src[j];
dest[j + i] = '\0';

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
