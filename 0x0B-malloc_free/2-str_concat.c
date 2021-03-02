#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int i1, i2, length1, length2;

length1 = 0;
while (*(s1 + length1))
length1++;

length2 = 0;
while (*(s2 + length2))
length2++;

concat = malloc(sizeof(char) * (length1 + length2));

if (concat == NULL)
return (NULL);

for (i1 = 0; i1 < length1; i1++)
*(concat + i1) = *(s1 + i1);

for (i2 = 0; i2 < length2; i2++, i1++)
*(concat + i1) = *(s2 + i2);

*(concat + (length1 + length2)) = '\0';
return (concat);
}
