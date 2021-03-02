#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
char *str_copy;
int i = 0, size = 0;

if (str == NULL) /* validate string input */
return (NULL);

while (*(str + i))
size++, i++; /* add null terminator to size */
size++;

str_copy = malloc(sizeof(char) * size); /* allocate memory */

if (str_copy == NULL) /* validate memory */
return (NULL);

i = 0;
while (i < size)
{
*(str_copy + i) = *(str + i);
i++;
}

return (str_copy);
}
