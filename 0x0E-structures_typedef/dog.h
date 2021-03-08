#ifndef DOG_H
#define DOG_H

/**
 *dog_t - typedef og struct dog
 */
typedef struct dog dog_t;

/**
 *struct dog - structure
 *@name: first element
 *@age: second element
 *@owner: third element
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *s);

char *_strcpy(char *dest, char *src);

#endif
