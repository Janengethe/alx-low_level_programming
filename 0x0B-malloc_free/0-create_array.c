#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0) /* validate size input */
return (NULL);

array = malloc(sizeof(char) * size); /* allocate memory */

if (array == NULL) /* validate memory */
return (NULL);

for (i = 0; i < size; i++)
{
*(array + i) = c;
}

*(array + i) = '\0';

return (array);
}
