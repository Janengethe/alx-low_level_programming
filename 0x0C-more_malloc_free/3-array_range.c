#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: starting of range.
 *@max: end of range.
 *Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *p;
int i, j;
if (min > max)
return (NULL);

j = max - min + 1;

p = malloc(sizeof(int) * j);

if (p == NULL)
return (NULL);

for (i = 0; i < j; i++)
*(p + i) = min++;

return (p);
}
