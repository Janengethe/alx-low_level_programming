#include <stdio.h>
#include "dog.h"

/**
 *init_dog - initializes a variable of type struct dog.
 *@d: variable of struct dog.
 *@name: element
 *@age: element
 *@owner: element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL) /* validate if d is initialized corrctly */
return;
d->name = name;
d->age = age;
d->owner = owner;
}
