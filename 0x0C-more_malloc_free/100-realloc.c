#include <stdio.h>
#include <stdlib.h>

/**
 *_realloc -  reallocates a memory block using malloc and free.
 *@ptr: pointer to the memory previously allocated with a call to malloc.
 *@old_size: size in bytes previously allocated.
 *@new_size: size in bytes of the new mwmory block.
 *Return: pointer to reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *p;
unsigned int i;
if (new_size == 0 && ptr != NULL)
free(ptr);

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{

p = malloc(new_size);

if (p == NULL)
return (NULL);

else
return (p);
}
if (new_size > old_size)
{
p = malloc(new_size);

if (p == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
*((char *)p + i) = *((char *)ptr + i);

free(ptr);
}

return (p);
}
