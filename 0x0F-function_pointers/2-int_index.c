#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index -searches for an integer.
 *@array: pointer to array
 *@size: number of elements in the array
 *@cmp: function pointer
 *Return: index of the first element for which
 *the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array != NULL && cmp != NULL)
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
