#include "lists.h"

/**
 *print_first - prints before main is executed
 *
 *Return: nothing
 */
void __attribute__ ((constructor)) print_first()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
