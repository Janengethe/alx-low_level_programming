#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - executes a function given
 *as a parameter on each element of an array.
 *@array: pointer to array
 *@size: size of the array
 *@action: function pointer
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
