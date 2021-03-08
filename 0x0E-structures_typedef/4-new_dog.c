#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - finds length of string
 * @s: string
 * Return: length
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
 * _strcpy - copy strings pointed to
 * @dest: end pointer
 * @src: begin pointer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; i < _strlen(src); i++)
dest[i] = src[i];
return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: element
 * @age: element
 * @owner: element
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *copy_name;
char *copy_owner;

dog = malloc(sizeof(dog_t));

if (dog == NULL)
return (NULL);

dog->age = age;

if (name == NULL)
dog->name = NULL;

else
{
copy_name = malloc(_strlen(name) + 1);

if (copy_name == NULL)
return (NULL);

dog->name = _strcpy(copy_name, name);
}

if (owner == NULL)
dog->owner = NULL;

else
{
copy_owner = malloc(_strlen(owner) + 1);

if (copy_owner == NULL)
return (NULL);
dog->owner = _strcpy(copy_owner, owner);
}
return (dog);
}
