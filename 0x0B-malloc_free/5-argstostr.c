#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: character to use
 *Return: length of string
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
s++;
count++;
}
return (count);
}

/**
 *argstostr - concatenates all the arguments of the program
 *@ac:arguments
 *@av:arguments
 *Return: NULL if ac == 0 or av == NULL,
 *Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *concat;
int length = 0, i, j, k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
length += _strlen(av[i]);
}

length += (ac + 1);

concat = malloc(sizeof(char) * length);

if (concat == NULL)
{
return (NULL);
}

for (i = 0; i < ac; i++)
{

for (j = 0; j < _strlen(av[i]); j++)
{
concat[k] = av[i][j];
k++;
}
concat[k++] = '\n';
}
return (concat);
}
