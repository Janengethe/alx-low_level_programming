#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
int **s;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

s = malloc(height * sizeof(int *));

if (s == NULL)
return (NULL);

for (i = 0; i < height; i++)
{

s[i] = malloc(width * sizeof(int));

if (s[i] == NULL)
{

for (i = 0; i < height; i++)
free(s[i]);
free(s);
return (NULL);
}

for (j = 0; j < width; j++)
s[i][j] = 0;
}

return (s);
}
