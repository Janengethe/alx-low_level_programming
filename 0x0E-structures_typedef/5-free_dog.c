#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - frees dogs
 *@d: variable
 *
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
